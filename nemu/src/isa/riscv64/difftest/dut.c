#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool success = true;
  int wrong_num = 0;
  for(int i=0;i<32;i++)
  {
    if(ref_r->gpr[i] != gpr(i))
    {
      success = false;
      wrong_num = i; 
    }
    if(ref_r->pc != pc){
      success = false;
      wrong_num = 33; 
    }
  }
  if(!success){
  printf("reg %d wrong \n",wrong_num);
  printf("$0\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[0],gpr(0));
  printf("ra\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[1],gpr(1));
  printf("sp\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[2],gpr(2));
  printf("gp\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[3],gpr(3));
  printf("tp\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[4],gpr(4));
  printf("t0\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[5],gpr(5));
  printf("t1\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[6],gpr(6));
  printf("t2\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[7],gpr(7));
  printf("s0\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[8],gpr(8));
  printf("s1\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[9],gpr(9));
  printf("a0\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[10],gpr(10));
  printf("a1\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[11],gpr(11));
  printf("a2\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[12],gpr(12));
  printf("a3\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[13],gpr(13));
  printf("a4\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[14],gpr(14));
  printf("a5\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[15],gpr(15));
  printf("a6\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[16],gpr(16));
  printf("a7\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[17],gpr(17));
  printf("s2\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[18],gpr(18));
  printf("s3\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[19],gpr(19));
  printf("s4\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[20],gpr(20));
  printf("s5\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[21],gpr(21));
  printf("s6\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[22],gpr(22));
  printf("s7\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[23],gpr(23));
  printf("s8\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[24],gpr(24));
  printf("s9\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[25],gpr(25));
  printf("s10\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[26],gpr(26));
  printf("s11\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[27],gpr(27));
  printf("t3\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[28],gpr(28));
  printf("t4\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[29],gpr(29));
  printf("t5\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[30],gpr(30));
  printf("t6\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->gpr[31],gpr(31));
  printf("pc\tref\t0x%016lx\tdut\t0x%016lx\n",ref_r->pc,cpu.pc);
  }
  return success;
}

void isa_difftest_attach() {
}
