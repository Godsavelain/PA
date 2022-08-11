#include <common.h>
#include "syscall.h"

void syscall_trace(uintptr_t NO)
{
  #ifdef SYSCALL_TRACE
  printf("syscall happen NO:%ld \n",NO);
  Log("syscall happen NO:%ld \n",NO);
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

  //write
  int fd;
  char* buf;
  int count;
  int suc_cnt;

  switch (a[0]) {
    case 0:// EXIT
      halt(a[1]);
      break;
    case 1://YIELD
      yield();
      c->GPRx = 0;
      break;
    case 4://WRITE
      //SYS_WRITE , fd , buf , count
      //printf("syscall write\n");
      fd = a[1];
      buf = (char*)a[2];
      count = a[3];
      suc_cnt = 0;
      if((fd == 1) || (fd == 2))
      {
        for(int i=0;i< count;i++)
        {
          putch(*(buf + i));
          suc_cnt++;
        }
      }
      else
      {
        assert(0);
      }
      c->GPRx = suc_cnt;
      //printf("count %d suc_num %d\n",count , c->GPR2);
      break;

    case 9://SYS_brk
      printf("syscall brk\n");
      printf("inc %d\n",(int)a[1]);
      c->GPRx = 0;
      break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }

  syscall_trace(a[0]);

}
