#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
//#include <stdio.h>
#include <unistd.h>

#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void isa_reg_display();
word_t vaddr_read(vaddr_t addr, int len);

// WP* new_wp();
// void free_wp(WP* old_node)

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);


static int cmd_si(char *args) {
  int num;
  if(args == NULL)
  {
    num = 1;
  }
  else
  {
    num = atoi(args); 
  }
  cpu_exec(num);
  return 0;
}

static int cmd_x(char *args) {
  if(args == NULL)
  {
    printf("x operation need two arguments (x N expr)\n");
    return 0;
  }
  char *str_end = args + strlen(args);
  char *arg1 = strtok(args, " ");
  //printf("arg1 %s ",arg1);
  int arg1_num;
  arg1_num = atoi(arg1); 
  char *arg2 = arg1 + strlen(arg1) + 1;
    if (arg2 >= str_end) {
      arg2 = NULL;
      printf("x operation need two arguments (x N expr)\n");
    return 0;
    }
  uint32_t arg2_num;
  sscanf(arg2,"%x",&arg2_num);
  printf("%x\n",arg2_num);
  while(arg1_num > 0){
    uint data;
    printf("x read address %u \n",arg2_num);
    data = vaddr_read(arg2_num , 4);
    printf("%8x\n",data);
    //printf("%u\n",data);
    arg1_num--;
    arg2_num = arg2_num + 4;
  }
  return 0;
}


static int cmd_info(char *args) {
  if(args == NULL)
  {
    printf("info operation needs an argument ([rw])\n");
    return 0;
  }
  if(strcmp(args, "r") == 0)
  {
    isa_reg_display();
  }
  return 0;
}

static int cmd_p(char *args) {
  if(args == NULL)
  {
    printf("p operation needs an expression input\n");
    return 0;
  }
  uint out;
  bool success;
  out = expr(args , &success);
  printf("result:%u\n",out);
  return 0;
}

static int cmd_t(char *args) {

  char buf[65546];
  
  FILE *fp = fopen("./input", "r");
  assert(fp != NULL);
  int j = 0;
  int wrong = 0;
  while(fgets(buf , 65546, fp))
      {
          //printf("%s \n",buf);
          char *p;
          p = strchr(buf, ' ');
          char *num = malloc(20);
          int i;
          for(i=0;(i+buf)<p;i++)
              {
                *(num+i) = buf[i];
              }
          *(num+i) = '\0';
          uint number = (uint)atoi(num);
          uint test_num;
          bool success;
          char *temp = NULL;
          if((temp = strstr(p,"\n")))
          {
            *temp = '\0';
          }
          test_num = expr(p , &success);
          if(success == false){
            j++;
            continue;
          }
          if (test_num != number)
          {
            printf("error occured at line %d\n",j);
            printf("expression %s", p);
            //printf("length %d \n", (int)strlen(p));
            printf("test_num:%u real_num %u \n",test_num,number);
            assert(0);
            wrong++;
          }
          else
          {
            printf("pass line %d \n",j);
          }
          j++;
        }
        printf("wrong %d\n",wrong);
    fclose(fp);
    return 0;
}

static int cmd_w(char *args) {
  if(args == NULL)
  {
    printf("w operation needs an argument (expr)\n");
    return 0;
  }
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Step one instruction exactly.", cmd_si },
  { "info", "Show all rigisters or watchpoints.", cmd_info },
  { "x", "Scan Memory.", cmd_x },
  { "p", "Compute expression.", cmd_p },
  { "t", "Temp test.", cmd_t },
  { "w", "Watchpoints.", cmd_w },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
