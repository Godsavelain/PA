#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_inst_buffer();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ASNI_FMT(str(__GUEST_ISA__), ASNI_FG_YELLOW ASNI_BG_RED));
  printf("For help, type \"help\"\n");
  Log("Exercise: Please remove me in the source code and compile NEMU again.");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  //printf("img file name : %s\n",img_file);
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  // printf("argnum:%d\n",argc);
  // printf("args:%s\n",argv[0]);
  // printf("args:%s\n",argv[1]);
  // printf("args:%s\n",argv[2]);
  // printf("args:%s\n",argv[3]);
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return optind - 1;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }

  return 0;
}

static void parse_elf() 
{
  if(img_file != NULL)
  {
    //printf("img file name : %s\n",img_file);
    int len = strlen(img_file);
    char elf_file[100];
    strcpy(elf_file,img_file);
    elf_file[len-1] = 'f';
    elf_file[len-2] = 'l';
    elf_file[len-3] = 'e';
    FILE *fp = fopen(elf_file, "rb");
    Assert(fp, "Can not open '%s'", elf_file);
    //printf("elf file name : %s\n",elf_file);
    Elf64_Ehdr elf_head;
    // read elf head
    int a;
	  a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);   //fread参数1：读取内容存储地址，参数2：读取内容大小，参数3：读取次数，参数4：文件读取引擎
	  if (a == 0) assert(0);
	  // judge magic number
	  if (elf_head.e_ident[0] != 0x7F ||
		  elf_head.e_ident[1] != 'E' ||
		  elf_head.e_ident[2] != 'L' ||
		  elf_head.e_ident[3] != 'F')
	  {
		  printf("Not a ELF file\n");
		  assert(0);
	  } 
    //printf("read elf\n");
    Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
    assert(shdr != NULL);
    fseek(fp, elf_head.e_shoff, SEEK_SET);
    a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
    assert( a!=0 );
    // 重置指针位置到文件流开头
	  rewind(fp);
	// 将fp指针移到 字符串表偏移位置处
	  fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);
	// 第e_shstrndx项是字符串表 定义 字节 长度 char类型 数组
	  char shstrtab[shdr[elf_head.e_shstrndx].sh_size];
	  char *temp = shstrtab;
    for (int i = 0; i < elf_head.e_shnum; i++)
	{
		//printf("i:%d elf_type:%d\n",i,shdr[i].sh_type);
    if(shdr[i].sh_type != SHT_SYMTAB)
    {
      continue;
    }
    temp = shstrtab;
		temp = temp + shdr[i].sh_name;
    //if (strcmp(temp, ".dynsym") != 0) continue;//该section名称
		// printf("节的名称: %s\n", temp);
		// printf("节首的偏移: %x\n", (uint)shdr[i].sh_offset);
		// printf("节的大小: %x\n", (uint)shdr[i].sh_size);
    Elf64_Sym *sign_data=(Elf64_Sym*)malloc(sizeof(uint8_t)*shdr[i].sh_size);
		// 依据此段在文件中的偏移读取出

	// 将fp指针移到 字符串表偏移位置处
		fseek(fp, shdr[i].sh_offset, SEEK_SET);
		a = fread(sign_data, sizeof(uint8_t)*shdr[i].sh_size, 1, fp);
    assert( a!=0 );

		int j = 0;
		for (j=0; j<(sizeof(uint8_t)*shdr[i].sh_size / sizeof(sign_data[0])); j++)
		{
      // if(sign_data[j].st_info == STT_FUNC)
      
      printf("name:%u value:%lx type: %u \n",sign_data[j].st_name,sign_data[j].st_value,sign_data[j].st_info);
      
		}
    free(sign_data);
	}
  free(shdr);
  // free(sign_data);
  }
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  parse_elf();

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  init_inst_buffer();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
