#include "VCore.h"    // Verilog模块会被编译成Vxxx
#include "verilated.h"
#include "svdpi.h"
#include "VCore__Dpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <verilated_vcd_c.h>
#include <dlfcn.h>

#include <iostream>
#include <fstream>
//Log

std::ofstream fout;

#define ASNI_FG_BLACK   "\33[1;30m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_YELLOW  "\33[1;33m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FG_MAGENTA "\33[1;35m"
#define ASNI_FG_CYAN    "\33[1;36m"
#define ASNI_FG_WHITE   "\33[1;37m"
#define ASNI_BG_BLACK   "\33[1;40m"
#define ASNI_BG_RED     "\33[1;41m"
#define ASNI_BG_GREEN   "\33[1;42m"
#define ASNI_BG_YELLOW  "\33[1;43m"
#define ASNI_BG_BLUE    "\33[1;44m"
#define ASNI_BG_MAGENTA "\33[1;35m"
#define ASNI_BG_CYAN    "\33[1;46m"
#define ASNI_BG_WHITE   "\33[1;47m"
#define ASNI_NONE       "\33[0m"

#define ASNI_FMT(str, fmt) fmt str ASNI_NONE

long long unsigned int Memory[100000];

bool has_end = false;
bool has_error = false;

VCore *top;
VerilatedVcdC *m_trace;
int npc_addr;
int raddr;
int waddr;
bool d_ren = false;
bool d_wen = false;
bool i_ren = false;
long long unsigned int d_read_data;
long long unsigned int i_read_data;
int mem_latency = 4;
int imem_wait_num = 0;
int dmem_wait_num = 0;
vluint64_t sim_time;

//difftest

static char diff_so_file[100];
static int difftest_port = 1234;

typedef struct {
  long unsigned int gpr[32];
  int pc;
} riscv64_CPU_state;

riscv64_CPU_state cpu = {};

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

typedef void (*diff_memcpy)(uint32_t addr, void *buf, long unsigned int n, bool direction);
typedef void (*diff_regcpy)(void *dut, bool direction);
typedef void (*diff_exec)(uint64_t n);
typedef void (*diff_raise_intr)(uint64_t NO);
typedef void (*diff_init)(int);

void (*difftest_memcpy)(uint32_t addr, void *buf, long unsigned int n, bool direction) = NULL;
void (*difftest_regcpy)(void *dut, bool direction) = NULL;
void (*difftest_exec)(uint64_t n) = NULL;
void (*difftest_raise_intr)(uint64_t NO) = NULL;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;
  while (nr_ref -- > 0) {
    difftest_exec(1);
  }
}


void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  printf("ref file %s \n",ref_so_file);

  void *handle;
  // handle = dlopen(ref_so_file, RTLD_LAZY | RTLD_DEEPBIND);
  handle = dlopen(ref_so_file, RTLD_LAZY );
  assert(handle);
  difftest_memcpy = (diff_memcpy)dlsym(handle, "difftest_memcpy");
  assert(difftest_memcpy);

  difftest_regcpy = (diff_regcpy)dlsym(handle, "difftest_regcpy");
  assert(difftest_regcpy);

  difftest_exec = (diff_exec)dlsym(handle, "difftest_exec");
  assert(difftest_exec);

  difftest_raise_intr = (diff_raise_intr)dlsym(handle, "difftest_raise_intr");
  assert(difftest_raise_intr);

  void (*difftest_init)(int) = (diff_init)dlsym(handle, "difftest_init");
  assert(difftest_init);

  printf("Differential testing: %s", ASNI_FMT("ON", ASNI_FG_GREEN));
  printf("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  difftest_init(port);
  difftest_memcpy(0x80000000, Memory, img_size, DIFFTEST_TO_REF);

  for(int i=0;i<32;i++){
    cpu.gpr[i] = 0;
  }
  cpu.pc = 0x80000000;

  difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}


static void checkregs(riscv64_CPU_state *ref, int pc) {
    bool same = true;
    if( (top->io_regs_out_0 != ref->gpr[0]) || (top->io_regs_out_1 != ref->gpr[1]) ||(top->io_regs_out_2 != ref->gpr[2]) ||(top->io_regs_out_3 != ref->gpr[3]) ||\
        (top->io_regs_out_4 != ref->gpr[4]) || (top->io_regs_out_5 != ref->gpr[5]) ||(top->io_regs_out_6 != ref->gpr[6]) ||(top->io_regs_out_7 != ref->gpr[7]) ||\
        (top->io_regs_out_8 != ref->gpr[8]) || (top->io_regs_out_9 != ref->gpr[9]) ||(top->io_regs_out_10 != ref->gpr[10]) ||(top->io_regs_out_11 != ref->gpr[11]) ||\
        (top->io_regs_out_12 != ref->gpr[12]) || (top->io_regs_out_13 != ref->gpr[13]) ||(top->io_regs_out_14 != ref->gpr[14]) ||(top->io_regs_out_15 != ref->gpr[15]) ||\
        (top->io_regs_out_16 != ref->gpr[16]) || (top->io_regs_out_17 != ref->gpr[17]) ||(top->io_regs_out_18 != ref->gpr[18]) ||(top->io_regs_out_19 != ref->gpr[19]) ||\
        (top->io_regs_out_20 != ref->gpr[20]) || (top->io_regs_out_21 != ref->gpr[21]) ||(top->io_regs_out_22 != ref->gpr[22]) ||(top->io_regs_out_23 != ref->gpr[23]) ||\
        (top->io_regs_out_24 != ref->gpr[24]) || (top->io_regs_out_25 != ref->gpr[25]) ||(top->io_regs_out_26 != ref->gpr[26]) ||(top->io_regs_out_27 != ref->gpr[27]) ||\
        (top->io_regs_out_28 != ref->gpr[28]) || (top->io_regs_out_29 != ref->gpr[29]) ||(top->io_regs_out_30 != ref->gpr[30]) ||(top->io_regs_out_31 != ref->gpr[31]))
    {
        same = false;
    }
    if(pc != ref->pc){
        same = false;
    }
    if(!same){
        printf("reg0  x0  ref: %016lx  dut: %016lx \n", ref->gpr[0],  top->io_regs_out_0 );
        printf("reg1  ra  ref: %016lx  dut: %016lx \n", ref->gpr[1],  top->io_regs_out_1 );
        printf("reg2  sp  ref: %016lx  dut: %016lx \n", ref->gpr[2],  top->io_regs_out_2 );
        printf("reg3  gp  ref: %016lx  dut: %016lx \n", ref->gpr[3],  top->io_regs_out_3 );
        printf("reg4  tp  ref: %016lx  dut: %016lx \n", ref->gpr[4],  top->io_regs_out_4 );
        printf("reg5  t0  ref: %016lx  dut: %016lx \n", ref->gpr[5],  top->io_regs_out_5 );
        printf("reg6  t1  ref: %016lx  dut: %016lx \n", ref->gpr[6],  top->io_regs_out_6 );
        printf("reg7  t2  ref: %016lx  dut: %016lx \n", ref->gpr[7],  top->io_regs_out_7 );
        printf("reg8  s0  ref: %016lx  dut: %016lx \n", ref->gpr[8],  top->io_regs_out_8 );
        printf("reg9  s1  ref: %016lx  dut: %016lx \n", ref->gpr[9],  top->io_regs_out_9 );
        printf("reg10 a0  ref: %016lx  dut: %016lx \n", ref->gpr[10], top->io_regs_out_10 );
        printf("reg11 a1  ref: %016lx  dut: %016lx \n", ref->gpr[11], top->io_regs_out_11 );
        printf("reg12 a2  ref: %016lx  dut: %016lx \n", ref->gpr[12], top->io_regs_out_12 );
        printf("reg13 a3  ref: %016lx  dut: %016lx \n", ref->gpr[13], top->io_regs_out_13 );
        printf("reg14 a4  ref: %016lx  dut: %016lx \n", ref->gpr[14], top->io_regs_out_14 );
        printf("reg15 a5  ref: %016lx  dut: %016lx \n", ref->gpr[15], top->io_regs_out_15 );
        printf("reg16 a6  ref: %016lx  dut: %016lx \n", ref->gpr[16], top->io_regs_out_16 );
        printf("reg17 a7  ref: %016lx  dut: %016lx \n", ref->gpr[17], top->io_regs_out_17 );
        printf("reg18 s2  ref: %016lx  dut: %016lx \n", ref->gpr[18], top->io_regs_out_18 );
        printf("reg19 s3  ref: %016lx  dut: %016lx \n", ref->gpr[19], top->io_regs_out_19 );
        printf("reg20 s4  ref: %016lx  dut: %016lx \n", ref->gpr[20], top->io_regs_out_20 );
        printf("reg21 s5  ref: %016lx  dut: %016lx \n", ref->gpr[21], top->io_regs_out_21 );
        printf("reg22 s6  ref: %016lx  dut: %016lx \n", ref->gpr[22], top->io_regs_out_22 );
        printf("reg23 s7  ref: %016lx  dut: %016lx \n", ref->gpr[23], top->io_regs_out_23 );
        printf("reg24 s8  ref: %016lx  dut: %016lx \n", ref->gpr[24], top->io_regs_out_24 );
        printf("reg25 s9  ref: %016lx  dut: %016lx \n", ref->gpr[25], top->io_regs_out_25 );
        printf("reg26 s10 ref: %016lx  dut: %016lx \n", ref->gpr[26], top->io_regs_out_26 );
        printf("reg27 s11 ref: %016lx  dut: %016lx \n", ref->gpr[27], top->io_regs_out_27 );
        printf("reg28 t3  ref: %016lx  dut: %016lx \n", ref->gpr[28], top->io_regs_out_28 );
        printf("reg29 t4  ref: %016lx  dut: %016lx \n", ref->gpr[29], top->io_regs_out_29 );
        printf("reg30 t5  ref: %016lx  dut: %016lx \n", ref->gpr[30], top->io_regs_out_30 );
        printf("reg31 t6  ref: %016lx  dut: %016lx \n", ref->gpr[31], top->io_regs_out_31 );
        printf("pc  ref: %08x  dut: %08x \n", ref->pc, pc );
        has_end = true;
        has_error = true;
    }
}

void difftest_step(int pc, int npc) {
  riscv64_CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = 0x%08x  at pc = 0x%08x \n", ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  int temp_pc = ref_r.pc;
  difftest_exec(1);
  difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  ref_r.pc = temp_pc;
  checkregs(&ref_r,pc);
}

extern "C" void wb_info (const svBitVecVal* inst,const svBitVecVal* pc ,svBit ebreak)
{
    int instruction = *inst;
    int pc_valie = *pc;
    bool has_ebreak = ebreak;
    if(has_ebreak){
        has_end = true;
    }
    printf("pc:%08x inst:%08x\n",pc_valie,instruction );
}

long long int read_mem(unsigned int addr){
    //printf("read addr %x \n",addr);
    if(addr < 0x80000000){
        printf("read mem addr error!\n");
        return 0;
    }
    int offset = (addr - 0x80000000);
    int i = offset / 8;
    int j = offset % 8;
    long long unsigned int result = 0;
    if(j == 4){
        result = Memory[i]>>32;
    }
    else{
        result = Memory[i];
    }
    //printf("read %llx from address %x \n",result,addr);
    char log[200];
    sprintf(log, "read %llx from address %x \n", result,addr);
    fout << log ;

    return result;
}

void write_mem(unsigned int addr,long long unsigned int data, unsigned char write_mask){
    //printf("Addr %x Data %llx Mask: %u \n",addr ,data , write_mask);
    int offset = (addr - 0x80000000);
    int i = offset / 8;
    long long int old_data = Memory[i];
    long long int temp_data = 0;
    for(int j=0;j<8;j++){
        if(write_mask % 2 == 1){
            temp_data = temp_data | (((long long int)0xff << (j*8)) & data);
        }
        else{
            temp_data = temp_data | (((long long int)0xff << (j*8)) & old_data);
        }
        write_mask = write_mask/2;
    }
    Memory[i] = temp_data;
    char log[200];
    sprintf(log, "write %llx to address %x \n", data,addr);
    fout << log ;
}

long inst_load(char* filename){
    FILE *p;
    char real_name[100];
    sprintf(real_name,"%s%s%s","./tests/",filename,"-riscv64-npc.bin");
    printf("test:%s\n",real_name);
    //real_name = strcat(strcat(pre,filename),after);
    // p = fopen("./tests/dummy-riscv64-npc.bin","rb");
    p = fopen(real_name,"rb");
    if(!p){
        printf("fail to open file\n");
    }
    int base_addr = 0x80000000;
    int data = 0;
    bool low = true;
    long size = 0;
    while(fread(&data,sizeof(int),1,p)!=0)
    {
        if(low){
            write_mem(base_addr , data ,0x0f);
            low = false;
        }
        else{
            write_mem(base_addr , ((long long int)data << 32)  ,0xf0);
            low = true;
        }
        base_addr = base_addr + 4;
        //printf("read inst %08x \n",data);
        size = size + 4;
    }
    return size;
}


void npc_step(){
    if(i_ren){
        imem_wait_num--;
        //printf("imem_wait_num %d \n",imem_wait_num);
    }
    else if(d_ren || d_wen){
        dmem_wait_num--;
        //printf("dmem_wait_num %d \n",dmem_wait_num);
    }
    
    top->clock = 1;

    top->eval();

    if(top->io_dmem_req_bits_ren){
        raddr = top->io_dmem_req_bits_raddr;
        d_ren = true;
        dmem_wait_num = mem_latency;
        d_read_data = read_mem(raddr); 
    }
    else if(top->io_dmem_req_bits_wen){
        d_wen = true;
        dmem_wait_num = mem_latency;
        waddr = top->io_dmem_req_bits_waddr;
        unsigned char temp_mask;      
        temp_mask = top->io_dmem_req_bits_wmask;
        long long unsigned int wdata = top->io_dmem_req_bits_wdata;
        write_mem(waddr, wdata , temp_mask);
    }
    else{
        if(top->io_imem_req_bits_ren && (imem_wait_num == 0) && (!d_wen && !d_ren &&!i_ren)){
        npc_addr = top->io_imem_req_bits_raddr;
        i_ren = true;
        i_read_data = read_mem(npc_addr);
        imem_wait_num = mem_latency;
        }
    }

    m_trace->dump(sim_time);
    sim_time++;

    if(i_ren && (imem_wait_num == 0)){
        //printf("imem read addr %x \n",npc_addr);
        top->io_imem_resp_bits_rdata = i_read_data;
        top->io_imem_resp_bits_read_ok = true;
        i_ren = false;
    }
    else{
        top->io_imem_resp_bits_read_ok = false;
    }

    if(d_ren && ((dmem_wait_num == 0))){
        top->io_dmem_resp_bits_read_ok = true;
        top->io_dmem_resp_bits_rdata = d_read_data;
        d_ren = false;
    }
    else{
        top->io_dmem_resp_bits_read_ok = false;
    }

    if(d_wen  && (dmem_wait_num == 0)) {
        top->io_dmem_resp_bits_write_ok = true;
        d_wen = false;
    }
    else{
        top->io_dmem_resp_bits_write_ok = false;
    }

    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    if(top->io_commit ){
        char log[200];
        sprintf(log, "commit pc %08x\n", top->io_commit_pc);
        fout << log ;
        //printf("commit pc %08x\n",top->io_commit_pc);
        cpu.pc = top->io_commit_pc;
        cpu.gpr[ 0] = top->io_regs_out_0; 
        cpu.gpr[ 1] = top->io_regs_out_1; 
        cpu.gpr[ 2] = top->io_regs_out_2; 
        cpu.gpr[ 3] = top->io_regs_out_3; 
        cpu.gpr[ 4] = top->io_regs_out_4; 
        cpu.gpr[ 5] = top->io_regs_out_5; 
        cpu.gpr[ 6] = top->io_regs_out_6; 
        cpu.gpr[ 7] = top->io_regs_out_7; 
        cpu.gpr[ 8] = top->io_regs_out_8; 
        cpu.gpr[ 9] = top->io_regs_out_9; 
        cpu.gpr[10] = top->io_regs_out_10;
        cpu.gpr[11] = top->io_regs_out_11;
        cpu.gpr[12] = top->io_regs_out_12;
        cpu.gpr[13] = top->io_regs_out_13;
        cpu.gpr[14] = top->io_regs_out_14;
        cpu.gpr[15] = top->io_regs_out_15;
        cpu.gpr[16] = top->io_regs_out_16;
        cpu.gpr[17] = top->io_regs_out_17;
        cpu.gpr[18] = top->io_regs_out_18;
        cpu.gpr[19] = top->io_regs_out_19;
        cpu.gpr[20] = top->io_regs_out_20;
        cpu.gpr[21] = top->io_regs_out_21;
        cpu.gpr[22] = top->io_regs_out_22;
        cpu.gpr[23] = top->io_regs_out_23;
        cpu.gpr[24] = top->io_regs_out_24;
        cpu.gpr[25] = top->io_regs_out_25;
        cpu.gpr[26] = top->io_regs_out_26;
        cpu.gpr[27] = top->io_regs_out_27;
        cpu.gpr[28] = top->io_regs_out_28;
        cpu.gpr[29] = top->io_regs_out_29;
        cpu.gpr[30] = top->io_regs_out_30;
        cpu.gpr[31] = top->io_regs_out_31;
        difftest_step(top->io_commit_pc,0);
    }
}


int main(int argc, char **argv, char **env){
    if(argc < 2){
        printf("need to specify test name\n");
        return 1;
    }
    fout.open("./log.txt");
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);            // Verilator仿真运行时参数（和编译的参数不一样，详见Verilator手册第6章
    top = new VCore;
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    top->trace(m_trace, 20);
    m_trace->open("waveform.vcd");
    
    top->io_dmem_resp_valid = true;
    top->io_dmem_req_ready = true;

    top->io_imem_resp_valid = true;
    top->io_imem_req_ready = true;

    sim_time = 0;
    int success = 0;

    char *p;
    char *p2;
    char name[30] = {0};
    p = argv[1];
    int i;
    for(i = strlen(p);i>0;i--){
        if(*(p+i-1) == '/'){
            break;
        }
    }
    p2 = p+i;
    p = strstr(p,"-riscv");
    int n=0;
    n = p - p2;
    strncpy(name, p2,n);
    long img_size;
    img_size = inst_load(name);
    strcpy(diff_so_file , "./difftest/riscv64-nemu-interpreter-so");
    init_difftest(diff_so_file, img_size, difftest_port);
    d_ren = false;
    d_wen = false;
    top->reset = 1;
    for(int i=0;i<3;i++){
        top->clock = 0;
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
        top->clock = 1;
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    top->reset = 0;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    
    top->io_imem_resp_bits_read_ok = 0;
    top->io_imem_resp_bits_write_ok = false;
    top->io_dmem_resp_bits_rdata = 0;
    top->io_dmem_resp_bits_read_ok = false;
    top->io_dmem_resp_bits_write_ok = false;

    top->clock = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    top->clock = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    npc_addr = top->io_imem_req_bits_raddr;
    raddr = top->io_dmem_req_bits_raddr;
    waddr = top->io_dmem_req_bits_waddr;
    // while (!Verilated::gotFinish()) { 
    while (!has_end) { 
    npc_step();
    }
    int a10 = 0;
    a10 = top->io_regs_out_10;
    if((a10 == 0) && (has_error == false)){
        printf("HIT GOOD TRAP at at pc = 0x%016x\n",top->io_commit_pc);
    }
    else{
        printf("HIT BAD TRAP at at pc = 0x%016x\n",top->io_commit_pc);
        success = 1;
    }
    
    m_trace->close();
    delete top;
    delete contextp;
    fout.close();
    return success;
}
