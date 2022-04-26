#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  int word_num = n / 8;
  int remain = n % 8;
  long unsigned int *buffer;
  buffer = (long unsigned int *)buf;
  if(direction == DIFFTEST_TO_DUT){
    while(word_num > 0){
      long unsigned int ref_data = paddr_read(addr, 8);
      *buffer = ref_data;
      buffer++;
      addr = addr + 8;
      word_num--;
    }
    while(remain > 0){
      char ref_data2 = paddr_read(addr, 1);
      char *buf2;
      buf2 = (char *)buffer;
      *buf2 = ref_data2;
      buf2++;
      addr = addr + 1;
      remain--;
    }
  }
  else{
    while(word_num > 0){
      long unsigned int dut_data = *buffer;
      paddr_write(addr, 8 , dut_data);
      buffer++;
      addr = addr + 8;
      word_num--;
    }
    while(remain > 0){
      char *buf2;
      buf2 = (char *)buffer;
      char dut_data2;
      dut_data2 = *buf2;
      paddr_write(addr, 1 , dut_data2);
      buf2++;
      addr = addr + 1;
      remain--;
    }
  }
}

void difftest_regcpy(void *dut, bool direction) {
  long unsigned int *regs;
  regs = (long unsigned int *)dut;
  if(direction == DIFFTEST_TO_DUT){
    for(int i=0;i<32;i++){
      *regs = cpu.gpr[i];
      regs++;
    }
    uint *pc;
    pc = (uint *)regs;
    *pc = cpu.pc;
  }
  else{
    for(int i=0;i<32;i++){
      cpu.gpr[i] = *regs;
      regs++;
    }
    uint *pc;
    pc = (uint *)regs;
    cpu.pc = *pc;
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
