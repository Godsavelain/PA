#include <common.h>
#include "syscall.h"

void syscall_trace(uintptr_t NO)
{
  #ifdef SYSCALL_TRACE
  printf("syscall happen NO:%d \n",NO);
  Log("syscall happen NO:%d \n",NO);
   #endif
  return;
}

void yield();

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;//a0
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case 0:
      halt(a[1]);
      break;
    case 1:
      yield();
      a[1] = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

  syscall_trace(a[0]);

}
