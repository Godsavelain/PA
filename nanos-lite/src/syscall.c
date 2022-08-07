#include <common.h>
#include "syscall.h"

void yield();

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;//a0
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case 1:
      printf("syscall 1\n");
      yield();
      a[1] = 0;
      break;
    default: panic("Unhandled syscall ID = %x", a[0]);
  }
}
