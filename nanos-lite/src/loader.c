#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  // size_t len = get_ramdisk_size();
  // char *elf_file = malloc(len * sizeof(char) );
  // ramdisk_read(elf_file, 0, len);
  uintptr_t entry = 0x83000000;
  Elf_Ehdr *elf_header;
  printf("aaa/n");
  ramdisk_read(&elf_header, 0, sizeof(Elf64_Ehdr));
  printf("aaa/n");
  assert(*(uint64_t *)elf_header->e_ident == 0x7f454c4602010100);
  printf("aaa/n");
  Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr) * elf_header->e_phnum);
  ramdisk_read(phdr, elf_header->e_phoff, sizeof(Elf64_Phdr) * elf_header->e_phnum);
  int phdr_num = 0;
  Elf64_Off  offset = 0;
  Elf64_Addr vaddr = 0;
  Elf64_Xword file_size = 0;
  Elf64_Xword mem_size = 0;
  for(;phdr_num < elf_header->e_phnum;phdr_num++)
  {
    if(phdr[phdr_num].p_type == PT_LOAD)
    {
    offset = phdr[phdr_num].p_offset;
    vaddr  = phdr[phdr_num].p_vaddr;
    file_size = phdr[phdr_num].p_filesz;
    mem_size  = phdr[phdr_num].p_memsz;
    ramdisk_read((char *)vaddr, offset, file_size);
    memset((char *)(vaddr + file_size), 0, (mem_size - mem_size));
    }
  }
  return entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

