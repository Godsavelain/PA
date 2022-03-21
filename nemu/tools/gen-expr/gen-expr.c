#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static char * buf_pointer = buf;

static void gen_rand_expr() {
  uint num;
  char *num_str = malloc(20 * sizeof(char));
  int ret;

  //assert((buf_pointer - buf ) < 65536);
  switch (rand()%3) {
    case 0: 
      
      num = rand();
      ret = snprintf(num_str, 10, "%d", num);
      assert(ret != -1);
      int str_len = strlen(num_str);
      if((buf_pointer + str_len- buf ) >= 65500)
    {
      buf_pointer = buf + 65501;
      return;
    }
      for(int i=0; i<str_len ;i++)
      {
        *buf_pointer = num_str[i];
        buf_pointer++;
      }
      break;
    case 1:
    if((buf_pointer - buf ) >= 65500)
    {
      buf_pointer = buf + 65501;
      return;
    } 
      *buf_pointer = '(';
      buf_pointer++;
      gen_rand_expr(); 
      if((buf_pointer - buf ) >= 65500)
    {
      buf_pointer = buf + 65501;
      return;
    } 
      *buf_pointer = ')';
      buf_pointer++;
      break;
    default: 
      gen_rand_expr();
      if((buf_pointer - buf ) >= 65500)
    {
      buf_pointer = buf + 65501;
      return;
    }  
      switch (rand()%4)
      {
        case 0:
          *buf_pointer = '+';
          buf_pointer++;
          break;
        case 1:
          *buf_pointer = '-';
          buf_pointer++;
          break;
        case 2:
          *buf_pointer = '*';
          buf_pointer++;
          break;
        case 3:
          *buf_pointer = '/';
          buf_pointer++;
          break;
      }
      gen_rand_expr(); 
      break;
  }
  *buf_pointer  = ' ';
  buf_pointer++;
  *buf_pointer  = '\0';
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_pointer = buf;
    //printf("round %d \n",i);
    gen_rand_expr();
    //printf("expression %s \n",buf);
    if((buf_pointer - buf ) >= 65500)
    {
      continue;
    }
    //printf("length %ld \n",buf_pointer - buf);
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int fret;
    fret = fscanf(fp, "%d", &result);
    assert(fret != 0);
    pclose(fp);
    
    printf("%u %s\n", result, buf);
  }
  return 0;
}
