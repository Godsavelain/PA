#include <proc.h>
#include <elf.h>
#include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

// static uintptr_t loader(PCB *pcb, const char *filename) {
//   // size_t len = get_ramdisk_size();
//   // char *elf_file = malloc(len * sizeof(char) );
//   // ramdisk_read(elf_file, 0, len);
//   //uintptr_t entry = 0x83000000;
//   Elf_Ehdr elf_header;
//   ramdisk_read(&elf_header, 0, sizeof(Elf64_Ehdr));

//   uintptr_t entry = elf_header.e_entry;
  
//   assert(*((uint32_t*)(elf_header.e_ident)) == 0x464c457f);
 
//   // Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr) * elf_header->e_phnum);

//   printf("%x\n",elf_header.e_phnum);

//   Elf64_Phdr phdr[elf_header.e_phnum];
 
//   ramdisk_read(phdr, elf_header.e_phoff, sizeof(Elf64_Phdr) * elf_header.e_phnum);
  
//   int phdr_num = 0;
//   Elf64_Off  offset = 0;
//   Elf64_Addr vaddr = 0;
//   Elf64_Xword file_size = 0;
//   Elf64_Xword mem_size = 0;
//   for(;phdr_num < elf_header.e_phnum;phdr_num++)
//   {
//     if(phdr[phdr_num].p_type == PT_LOAD)
//     {
//     offset = phdr[phdr_num].p_offset;
//     vaddr  = phdr[phdr_num].p_vaddr;
//     file_size = phdr[phdr_num].p_filesz;
//     mem_size  = phdr[phdr_num].p_memsz;
//     ramdisk_read((char *)vaddr, offset, file_size);
//     memset((char *)(vaddr + file_size), 0, (mem_size - file_size));
//     //printf("vaddr + file_size %p vaddr %x filesize %x memsize %x \n",offset,vaddr,file_size,mem_size);
//     printf("offset %x vaddr %x filesize %x memsize %x \n",offset,vaddr,file_size,mem_size);
//     }
//   }
//   return entry;
// }

static uintptr_t loader(PCB *pcb, const char *filename) {
  
  int fd = fs_open(filename, 0, 0);

  Elf_Ehdr elf_header;

  fs_read(fd, &elf_header ,sizeof(Elf64_Ehdr));
  //ramdisk_read(&elf_header, 0, sizeof(Elf64_Ehdr));

  uintptr_t entry = elf_header.e_entry;
  
  assert(*((uint32_t*)(elf_header.e_ident)) == 0x464c457f);
 
  // Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr) * elf_header->e_phnum);
  //printf("%x\n",elf_header.e_phnum);

  Elf64_Phdr phdr[elf_header.e_phnum];
 
  fs_lseek(fd,SEEK_SET,elf_header.e_phoff);
  fs_read(fd, phdr ,sizeof(Elf64_Phdr) * elf_header.e_phnum);
  //ramdisk_read(phdr, elf_header.e_phoff, sizeof(Elf64_Phdr) * elf_header.e_phnum);
  
  int phdr_num = 0;
  Elf64_Off  offset = 0;
  Elf64_Addr vaddr = 0;
  Elf64_Xword file_size = 0;
  Elf64_Xword mem_size = 0;
  for(;phdr_num < elf_header.e_phnum;phdr_num++)
  {
    if(phdr[phdr_num].p_type == PT_LOAD)
    {
    offset = phdr[phdr_num].p_offset;
    vaddr  = phdr[phdr_num].p_vaddr;
    file_size = phdr[phdr_num].p_filesz;
    mem_size  = phdr[phdr_num].p_memsz;
    //ramdisk_read((char *)vaddr, offset, file_size);
    fs_lseek(fd,SEEK_SET,offset);
    fs_read(fd, (char *)vaddr ,file_size);
    memset((char *)(vaddr + file_size), 0, (mem_size - file_size));
    //printf("vaddr + file_size %p vaddr %x filesize %x memsize %x \n",offset,vaddr,file_size,mem_size);
    printf("offset %x vaddr %x filesize %x memsize %x \n",offset,vaddr,file_size,mem_size);
    }
  }
  fs_close(fd);
  return entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

