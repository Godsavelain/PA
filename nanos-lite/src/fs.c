#include <fs.h>

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);


typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  int item_num = sizeof(file_table)/sizeof(file_table[0]);
  for(int i=0;i<item_num;i++){
    if(strcmp(file_table[i].name, pathname) == 0){
      file_table[i].open_offset = 0;
      return i;
    }
  }
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len){
  int offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  assert(offset <= file_table[fd].disk_offset + file_table[fd].size);
  int file_size = len;
  if(file_size > file_table[fd].size){
    file_size = file_table[fd].size;
  }
  ramdisk_read((char*)buf, offset, file_size);
  printf("open_offset %d disk_offset %d offset %d file_size %d\n",file_table[fd].open_offset,file_table[fd].disk_offset,offset,file_size);
  char *temp;
  temp = buf;
  for(int i=0;i<10;i++){
    printf("i:%d num%c\n",i,temp[i]);
  }
  return file_size;
}

size_t fs_write(int fd, const void *buf, size_t len){
  assert(fd > 2);
  int offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  assert(offset <= file_table[fd].disk_offset + file_table[fd].size);
  int file_size = len;
  if(file_size > file_table[fd].size){
    file_size = file_table[fd].size;
  }
  ramdisk_write(buf, offset, file_size);
  return file_size;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  printf("offset %d whence %d \n",(int)offset,whence);
  switch (whence)
  {
  case SEEK_SET:
    file_table[fd].open_offset = offset;
    break;
  case SEEK_CUR:
    file_table[fd].open_offset = file_table[fd].open_offset + offset;
    break;
  case SEEK_END:
    file_table[fd].open_offset = file_table[fd].size + offset;
  break;
  default:
    assert(0);
    break;
  }
  return file_table[fd].open_offset;
}


int fs_close(int fd){
  return 0;
}

