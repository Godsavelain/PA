#include <fs.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>


size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

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

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS ,FD_FB, FD_DISPINFO};

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
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, serial_write},
  [FD_EVENTS]  = {"/dev/events", 0, 0, 0, events_read, invalid_write},
  [FD_FB]  = {"/dev/fb", 0, 0, 0, invalid_read, fb_write},
  [FD_DISPINFO]  = {"/proc/dispinfo", 0, 0, 0, dispinfo_read, invalid_write},
#include "files.h"
};

int fs_open(const char *pathname, int flags, int mode){
  int item_num = sizeof(file_table)/sizeof(file_table[0]);
  for(int i=0;i<item_num;i++){
    if(strcmp(file_table[i].name, pathname) == 0){
      file_table[i].open_offset = 0;
      //Log("open file %s \n",file_table[i].name);
      return i;
    }
  } 
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len){
  if(len == 0){
    return 0;
  }
  size_t actual_len;
  actual_len = len;
  
  if(file_table[fd].read != NULL){
    actual_len = file_table[fd].read(buf,0,len);
  }
  else{
    assert(file_table[fd].open_offset < file_table[fd].size);
    int remain_space = file_table[fd].size - file_table[fd].open_offset;
    if(len > remain_space){
    actual_len = remain_space ;
  }
    size_t true_off = file_table[fd].disk_offset + file_table[fd].open_offset;
    // ramdisk_read(buf, offset, actual_len);
    ramdisk_read(buf, true_off, actual_len);
    //printf("read open_offset %d size %d offset %d len %d ac_len %d\n",file_table[fd].open_offset,file_table[fd].size,true_off,len,actual_len);
    // char *temp;
    // temp = buf;
    // for(int i=0;i<15;i++){
    //   printf("i:%d num:%c\n",i,temp[i+442]);
    // }
  file_table[fd].open_offset = file_table[fd].open_offset + actual_len;
  //Log("read file %s \n",file_table[fd].name);
  }
  
  return actual_len;
  //return actual_len;
}

size_t fs_write(int fd, const void *buf, size_t len){
  //printf("fd:%d fs_write len:%ld\n",fd,len);
  size_t actual_len;
  if(file_table[fd].write != NULL){
    if(fd == FD_FB){
      actual_len = file_table[fd].write(buf,file_table[fd].open_offset,len);
      file_table[fd].open_offset = file_table[fd].open_offset + actual_len;
      //printf("actual_len %ld \n",actual_len);
    }
    else{
      actual_len = file_table[fd].write(buf,0,len);
    } 
  }
  else
  {
    if(len == 0){
    return 0;
    }
  assert(file_table[fd].open_offset < file_table[fd].size);
  int remain_space = file_table[fd].size - file_table[fd].open_offset;
  actual_len = len;
  if(len > remain_space){
    actual_len = remain_space;
  }
  size_t true_off = file_table[fd].disk_offset + file_table[fd].open_offset;
  ramdisk_write(buf, true_off, actual_len);
  //printf("write open_offset %d disk_offset %d offset %d len %d ac_len %d\n",file_table[fd].open_offset,file_table[fd].disk_offset,true_off,len,actual_len);
  file_table[fd].open_offset = file_table[fd].open_offset + actual_len;
  }
  //Log("write file %s \n",file_table[fd].name);
  return actual_len;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  //printf("offset %d whence %d \n",(int)offset,whence);
  //printf("fs_lseek\n");
  size_t new_pos = 0;
  switch (whence)
  {
  case SEEK_SET:
    new_pos = offset;
    break;
  case SEEK_CUR:
    new_pos = file_table[fd].open_offset + offset;
    break;
  case SEEK_END:
    new_pos = file_table[fd].size + offset;
  break;
  default:
    assert(0);
    break;
  }
  if(new_pos < 0){
    return -1;
  }
  file_table[fd].open_offset = new_pos;
  return new_pos;
}


int fs_close(int fd){
  return 0;
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
  int fd = fs_open("/proc/dispinfo", 0 , 0);
  char buf1[100];
  int width = 0;
  int height = 0;
  fs_read(fd, buf1, 100);
  //printf("buf1 %s \n",buf1);
  char *pos = buf1;
  while(*pos != ':'){
    pos++;
  }
  pos++;
  while(*pos == ' '){
    pos++;
  }
  while(*pos != '\n'){
    //printf("pos1 %c width %d\n",*pos,width);
    width = (width * 10) + (*pos-'0');
    pos++;
  }
  char *pos2 = pos;
  while(*pos2 != ':'){
    pos2++;
  }
  pos2++;
  while(*pos2 == ' '){
    pos2++;
  }
  while(*pos2 != '\n'){
    //printf("pos2 %c height %d\n",*pos2,height);
    height = (height * 10) + (*pos2-'0');
    pos2++;
  }
  //printf("size %d \n",(width * height * 4));
  file_table[FD_FB].size = width * height * 4;
  printf("true size %ld \n",file_table[FD_FB].size);
}
