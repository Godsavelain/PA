#include <isa.h>

void ex_trace(word_t NO, vaddr_t epc)
{
  #ifdef CONFIG_EXTRACE
  printf("ex happen NO:%ld epc:%lx \n",NO,epc);
  Log("ex happen NO:%ld epc:%lx \n",NO,epc);
   #endif
  return;
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  word_t vec_addr;
  vec_addr = cpu.csr[3];
  //set mcause
  cpu.csr[0] = NO;
  //set mepc
  cpu.csr[2] = epc;
  ex_trace(NO,epc);
  return vec_addr;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
