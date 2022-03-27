#include <isa.h>
#include "local-include/reg.h"
#include <string.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  printf("$0\t\t0x%016lx\t\t%ld\n",gpr(0),gpr(0));
  printf("ra\t\t0x%016lx\t\t%ld\n",gpr(1),gpr(1));
  printf("sp\t\t0x%016lx\t\t%ld\n",gpr(2),gpr(2));
  printf("gp\t\t0x%016lx\t\t%ld\n",gpr(3),gpr(3));
  printf("tp\t\t0x%016lx\t\t%ld\n",gpr(4),gpr(4));
  printf("t0\t\t0x%016lx\t\t%ld\n",gpr(5),gpr(5));
  printf("t1\t\t0x%016lx\t\t%ld\n",gpr(6),gpr(6));
  printf("t2\t\t0x%016lx\t\t%ld\n",gpr(7),gpr(7));
  printf("s0\t\t0x%016lx\t\t%ld\n",gpr(8),gpr(8));
  printf("s1\t\t0x%016lx\t\t%ld\n",gpr(9),gpr(9));
  printf("a0\t\t0x%016lx\t\t%ld\n",gpr(10),gpr(10));
  printf("a1\t\t0x%016lx\t\t%ld\n",gpr(11),gpr(11));
  printf("a2\t\t0x%016lx\t\t%ld\n",gpr(12),gpr(12));
  printf("a3\t\t0x%016lx\t\t%ld\n",gpr(13),gpr(13));
  printf("a4\t\t0x%016lx\t\t%ld\n",gpr(14),gpr(14));
  printf("a5\t\t0x%016lx\t\t%ld\n",gpr(15),gpr(15));
  printf("a6\t\t0x%016lx\t\t%ld\n",gpr(16),gpr(16));
  printf("a7\t\t0x%016lx\t\t%ld\n",gpr(17),gpr(17));
  printf("s2\t\t0x%016lx\t\t%ld\n",gpr(18),gpr(18));
  printf("s3\t\t0x%016lx\t\t%ld\n",gpr(19),gpr(19));
  printf("s4\t\t0x%016lx\t\t%ld\n",gpr(20),gpr(20));
  printf("s5\t\t0x%016lx\t\t%ld\n",gpr(21),gpr(21));
  printf("s6\t\t0x%016lx\t\t%ld\n",gpr(22),gpr(22));
  printf("s7\t\t0x%016lx\t\t%ld\n",gpr(23),gpr(23));
  printf("s8\t\t0x%016lx\t\t%ld\n",gpr(24),gpr(24));
  printf("s9\t\t0x%016lx\t\t%ld\n",gpr(25),gpr(25));
  printf("s10\t\t0x%016lx\t\t%ld\n",gpr(26),gpr(26));
  printf("s11\t\t0x%016lx\t\t%ld\n",gpr(27),gpr(27));
  printf("t3\t\t0x%016lx\t\t%ld\n",gpr(28),gpr(28));
  printf("t4\t\t0x%016lx\t\t%ld\n",gpr(29),gpr(29));
  printf("t5\t\t0x%016lx\t\t%ld\n",gpr(30),gpr(30));
  printf("t6\t\t0x%016lx\t\t%ld\n",gpr(31),gpr(31));
}

word_t isa_reg_str2val(const char *s, bool *success) {
  word_t value = 0;
  if(strcmp(s,"$0") == 0)
  {
    value = gpr(0);
    *success = true;
  }
  else if(strcmp(s,"$ra") == 0)
  {
    value = gpr(1);
    *success = true;
  }
  else if(strcmp(s,"$sp") == 0)
  {
    value = gpr(2);
    *success = true;
  }
  else if(strcmp(s,"$gp") == 0)
  {
    value = gpr(3);
    *success = true;
  }
  else if(strcmp(s,"$tp") == 0)
  {
    value = gpr(4);
    *success = true;
  }
  else if(strcmp(s,"$t0") == 0)
  {
    value = gpr(5);
    *success = true;
  }
  else if(strcmp(s,"$t1") == 0)
  {
    value = gpr(6);
    *success = true;
  }
  else if(strcmp(s,"$t2") == 0)
  {
    value = gpr(7);
    *success = true;
  }
  else if(strcmp(s,"$s0") == 0)
  {
    value = gpr(8);
    *success = true;
  }
  else if(strcmp(s,"$s1") == 0)
  {
    value = gpr(9);
    *success = true;
  }
  else if(strcmp(s,"$a0") == 0)
  {
    value = gpr(10);
    *success = true;
  }
  else if(strcmp(s,"$a1") == 0)
  {
    value = gpr(11);
    *success = true;
  }
  else if(strcmp(s,"$a2") == 0)
  {
    value = gpr(12);
    *success = true;
  }
  else if(strcmp(s,"$a3") == 0)
  {
    value = gpr(13);
    *success = true;
  }
  else if(strcmp(s,"$a4") == 0)
  {
    value = gpr(14);
    *success = true;
  }
  else if(strcmp(s,"$a5") == 0)
  {
    value = gpr(15);
    *success = true;
  }
  else if(strcmp(s,"$a6") == 0)
  {
    value = gpr(16);
    *success = true;
  }
  else if(strcmp(s,"$a7") == 0)
  {
    value = gpr(17);
    *success = true;
  }
  else if(strcmp(s,"$s2") == 0)
  {
    value = gpr(18);
    *success = true;
  }
  else if(strcmp(s,"$s3") == 0)
  {
    value = gpr(19);
    *success = true;
  }
  else if(strcmp(s,"$s4") == 0)
  {
    value = gpr(20);
    *success = true;
  }
  else if(strcmp(s,"$s5") == 0)
  {
    value = gpr(21);
    *success = true;
  }
  else if(strcmp(s,"$s6") == 0)
  {
    value = gpr(22);
    *success = true;
  }
  else if(strcmp(s,"$s7") == 0)
  {
    value = gpr(23);
    *success = true;
  }
  else if(strcmp(s,"$s8") == 0)
  {
    value = gpr(24);
    *success = true;
  }
  else if(strcmp(s,"$s9") == 0)
  {
    value = gpr(25);
    *success = true;
  }
  else if(strcmp(s,"$s10") == 0)
  {
    value = gpr(26);
    *success = true;
  }
  else if(strcmp(s,"$s11") == 0)
  {
    value = gpr(27);
    *success = true;
  }
  else if(strcmp(s,"$t3") == 0)
  {
    value = gpr(28);
    *success = true;
  }
  else if(strcmp(s,"$t4") == 0)
  {
    value = gpr(29);
    *success = true;
  }
  else if(strcmp(s,"$t5") == 0)
  {
    value = gpr(30);
    *success = true;
  }
  else if(strcmp(s,"$t6") == 0)
  {
    value = gpr(31);
    *success = true;
  }
  return value;
}
