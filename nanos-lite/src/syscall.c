#include <common.h>
#include "syscall.h"

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

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

  //file ops
  int fd;
  char* buf;
  int count;
  int suc_cnt;
  int offset;
  int whence;

  switch (a[0]) {
    case 0:// EXIT
      halt(a[1]);
      break;
    case 1://YIELD
      yield();
      c->GPRx = 0;
      break;
    case 2://OPEN
      fd = fs_open((char *)a[1],a[2],a[3]);
      c->GPRx = fd;
      break;
    case 3://READ
      fd = a[1];
      buf = (char*)a[2];
      count = a[3];
      suc_cnt = 0;
      if((fd == 1) || (fd == 2))
      {
        assert(0);
      }
      else
      {
        suc_cnt = fs_read(fd, buf, count);
      }
      c->GPRx = suc_cnt;
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
        fs_write(fd, buf, count);
      }
      c->GPRx = suc_cnt;
      //printf("count %d suc_num %d\n",count , c->GPR2);
      break;
    case 7://CLOSE
      fd = a[1];
      suc_cnt = fs_close(fd);
      c->GPRx = suc_cnt;
      break;
    case 8://LSEEK
      fd = a[1];
      offset = a[2];
      whence = a[3];
      suc_cnt = fs_lseek(fd, offset,whence);
      c->GPRx = suc_cnt;
      break;
    case 9://SYS_brk
      printf("syscall brk\n");
      printf("inc %x\n",(int)c->GPR2);
      c->GPRx = 0;
      break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }

  syscall_trace(a[0]);

}
