#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_R, TYPE_B, TYPE_J,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) <<  11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1 | 0; }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) <<  12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1 | 0; }

void ftrace_call(word_t pc, word_t addr);
void ftrace_ret(word_t pc);

//csr address map
int CSR_MAP(int origin_addr){
  switch (origin_addr)
  {
  case 0x305:
    return 3;
    break;

  case 0x341:
    return 2;
    break;
  case 0x300:
    return 1;
    break;
  
  case 0x342:
    return 0;
    break;

  default:
    break;
  }
  assert(0);
  return 0;
}

//for csr instructions 
void CSR_ops(int op, int csr_addr , int rs1_addr ,int rd_addr){
  int true_addr = CSR_MAP(csr_addr);
  word_t old_csr_value = 0;
  word_t data = 0;
  switch (op) {
    case 0: //RW
    if(rd_addr != 0){
      old_csr_value = cpu.csr[true_addr];
    } 
    data = R(rs1_addr);
    cpu.csr[true_addr] = data;
    R(rd_addr) = old_csr_value;
    printf("write to %d %lx \n",true_addr,data);
    break;
    case 1: //RS
    old_csr_value = cpu.csr[true_addr];
    if(rs1_addr != 0){
      data = R(rs1_addr) | cpu.csr[true_addr];
      cpu.csr[true_addr] = data;
      printf("write to %d %lx \n",true_addr,data);
    }   
    R(rd_addr) = old_csr_value;
    break;
    case 2: //RC
    old_csr_value = cpu.csr[true_addr];
    if(rs1_addr != 0){
      data = ~R(rs1_addr) & cpu.csr[true_addr];
      cpu.csr[true_addr] = data;
      printf("write to %d %lx \n",true_addr,data);
    }
    R(rd_addr) = old_csr_value;
    break;
    case 3: //RWI
    if(rd_addr != 0){
      old_csr_value = cpu.csr[true_addr];
    } 
    data = (word_t)rs1_addr;
    cpu.csr[true_addr] = data;
    R(rd_addr) = old_csr_value;
    printf("write to %d %lx \n",true_addr,data);
    break;
    case 4: //RSI
    old_csr_value = cpu.csr[true_addr];
    if(rs1_addr != 0){
      data = (word_t)rs1_addr | cpu.csr[true_addr];
      cpu.csr[true_addr] = data;
    }   
    R(rd_addr) = old_csr_value;
    printf("write to %d %lx \n",true_addr,data);
    break;
    case 5: //RCI
    old_csr_value = cpu.csr[true_addr];
    if(rs1_addr != 0){
      data = ~(word_t)rs1_addr & cpu.csr[true_addr];
      cpu.csr[true_addr] = data;
    }
    R(rd_addr) = old_csr_value;
    printf("write to %d %lx \n",true_addr,data);
    break;
  }
}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1); destR(rd); src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_R: destR(rd); src1R(rs1); src2R(rs2); break;
    case TYPE_B: destI(immB(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); destR(rd); break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = SEXT(src1, 32));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4),32));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2),16));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1),8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = (src2 & src1) );
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = (src2 ^ src1) );
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest)  = (src2 | src1) );
  INSTPAT("????????????  ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("????????????  ????? 010 ????? 00100 11", slti   , I, R(dest) = ((long long int)src1 < (long long int)src2) ? 1 : 0);
  INSTPAT("????????????  ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (word_t)(src1 >> (word_t)BITS(src2, 5, 0)));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (word_t)((long long int)src1 >> BITS(src2, 5, 0)));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(((uint)src1 << BITS(src2, 4, 0)) , 32));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT(((uint)src1 >> BITS(src2, 4, 0)) , 32));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT(((int)src1 >> BITS(src2, 4, 0)) , 32));
  INSTPAT("????????????  ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS((src1 + src2) ,31 ,0 ), 32) );
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(((uint)src1 << BITS(src2, 4, 0)), 31, 0), 32 ) ) ; 
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT((uint)((int)src1 >> BITS(src2, 4, 0)), 32 ) ) ; 
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT(((uint)src1 >> BITS(src2, 4, 0)), 32 ) ) ; 
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS((src1 - src2) ,31 ,0 ), 32)  ) ; 
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = (src1 - src2) ) ; 
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = (src1 + src2) ) ; 
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((long long int)src1 < (long long int)src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS((src2 + src1) ,31 ,0 ), 32)  );
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (word_t)((long long int)src1 / (long long int)src2) );   
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = (word_t)((long long int)src1 % (long long int)src2) );   
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2 );   
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2 );   
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (src1 * src2) ) ;   
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(dest) = ((__int128_t)((__int128_t)src1 * (__int128_t)src2) >> 64 ) );  
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(dest) = ((__int128_t)((__int128_t)src1 * (__uint128_t)src2) >> 64 ) );  
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(dest) = ((__uint128_t)((__uint128_t)src1 * (__uint128_t)src2) >> 64 ) );  
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS((src2 * src1) ,31 ,0 ), 32)  );
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = (SEXT((uint)((int)src1 / (int)src2), 32)) );   
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  , R, R(dest) = (SEXT((uint)src1 / (uint)src2, 32)) );   
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = (SEXT((uint)((int)src1 % (int)src2), 32)) );   
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = (SEXT((uint)src1 % (uint)src2, 32)) );   
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = (src2 | src1)   );
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = (src2 & src1)   );
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = (src2 ^ src1)   );
  INSTPAT("?????????????????????????     11011 11", jal    , J, s->dnpc = s->pc + src1; R(dest) = s->snpc; if((dest == 1) || (dest == 5) ) ftrace_call(s->pc,s->dnpc););
  INSTPAT("????????????  ????? 000 ????? 11001 11", jalr   , I, s->dnpc = (src2 + src1) & (word_t)(-1); R(dest) = s->snpc; if((dest == 0) && (src2 == 0) && ((BITS(s->isa.inst.val, 19, 15) == 1) || BITS(s->isa.inst.val, 19, 15) == 5)) ftrace_ret(s->pc); else if((dest == 1) || (dest == 5)) ftrace_call(s->pc,s->dnpc););
  INSTPAT("????????????  ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("????????????  ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("????????????  ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((long long int)src1 < (long long int)src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("????????????  ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((long long int)src1 >= (long long int)src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("????????????  ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("????????????  ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1 >= src2) ? (s->pc + dest) : s->snpc );
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, vaddr_t ex_pc = isa_raise_intr(1,s->pc); s->dnpc = ex_pc; printf("jump to %lx \n",ex_pc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, vaddr_t pre_pc = cpu.csr[2]; s->dnpc = pre_pc; printf("return to %lx \n",pre_pc));  
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(0, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(1, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(2, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(3, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(4, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci , N, int csr_addr = BITS(s->isa.inst.val, 31, 20); int rs1_addr = BITS(s->isa.inst.val, 19, 15); int rd_addr = BITS(s->isa.inst.val, 11, 7);CSR_ops(5, csr_addr, rs1_addr ,rd_addr)); 
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

// static int trace_num = 300;
int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  // if(trace_num > 0){
  //   if(s->pc == 0x800013d0){
  //     printf("t2 %lu a0 %lu \n",gpr(7),gpr(10));
  //     trace_num--;
  //   }
  // }
  if(s->pc > 0x83000000){
       printf("inst %lx \n",s->pc);
     }
  return decode_exec(s);
}
