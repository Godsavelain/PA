#include <common.h>
#include <string.h>
#include <stdio.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

#define NAMEINIT(key)  [ AM_KEY_##key ] = #key,

static const char *names[] = {
  AM_KEYS(NAMEINIT)
};

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

static int width;
static int height;

size_t serial_write(const void *buf, size_t offset, size_t len) {
  size_t suc_cnt = 0;
  for(int i=0;i< len;i++)
        {
          putch(*((char *)buf + i));
          suc_cnt++;
        }
  return suc_cnt;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  size_t read_num = 0;
  char* temp_buf = (char*)buf;
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if(ev.keycode == AM_KEY_NONE){
    return 0;
  }
  while(ev.keycode != AM_KEY_NONE){
    int key_len = strlen(names[ev.keycode]);
    if((read_num + 4 + key_len + 1 )> len){//exceed the capacity
      break;
    }
    if(ev.keydown){
    memcpy(temp_buf,"kd ",3);
    }
    else{
      memcpy(temp_buf,"ku ",3);
    }
    temp_buf = temp_buf + 3;
    memcpy(temp_buf,names[ev.keycode],key_len);
    temp_buf = temp_buf + key_len;
    memcpy(temp_buf,"\n",1);
    temp_buf = temp_buf + 1;
    //printf("%s \n",(char*)buf);
    read_num = read_num + 4 + key_len;
    ev = io_read(AM_INPUT_KEYBRD);   
  }
  // printf("bbb \n");
  // printf("%s \n",(char*)buf);
  // printf("bbb \n");
  //printf("read num %d \n",read_num);
  memcpy(temp_buf,"\0",1);
  temp_buf = temp_buf + 1;
  // read_num = read_num + 1;
  read_num = 1;
  return read_num;
}

//legal response like 
// WIDTH : 640
// HEIGHT:480
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int width,height;
  char str[100]; 
  width = io_read(AM_GPU_CONFIG).width;
  height = io_read(AM_GPU_CONFIG).height;
  int true_len = 0;
  sprintf((char*)str,"WIDTH:%d\nHEIGHT:%d\n",width,height);
  true_len = strlen(str) + 1;
  //printf("true len %d len %ld\n",true_len,len);
  if(true_len > len){
    return 0;
  }
  sprintf((char*)buf,"WIDTH:%d\nHEIGHT:%d\n",width,height);
  //printf("buf::%s\n",(char*)buf);
  return true_len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  //printf("fbwrite \n"); 
  if(len == 0){//len = 0 means to update the screen
    printf("update the screen\n");
    io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
    return 0;
  }
  
  int num = len;
  int write_num = 0;
  // int width,height;
  // width = io_read(AM_GPU_CONFIG).width;
  // height = io_read(AM_GPU_CONFIG).height;
  int x,y;
  x = ((offset / 4) % width);
  y = offset / (width * 4);
  int x_left = width - x;
  //printf("x_left:%d  num:%d\n",x_left,num);
  while(x_left < (num/4)){
    io_write(AM_GPU_FBDRAW, x , y , (char *)buf, x_left, 1, false);
    printf("fbdraw x:%d y:%d x_left:%d\n",x * width, y * height, x_left);
    buf = (char*)buf + x_left;
    num = num - x_left;
    write_num = write_num + x_left;
    x_left = width;
    x = 0;
    y = y+1;
    if( y >= height){
      return write_num;
    }
  }
  //printf("offset:%d x:%d y:%d len:%d\n",(int)offset ,x, y ,(int)len);
  //printf("x:%d y:%d len:%d\n",x, y ,(int)len);
  io_write(AM_GPU_FBDRAW, x , y , (char *)buf, len/4, 1, true);
  
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
  width = io_read(AM_GPU_CONFIG).width;
  height = io_read(AM_GPU_CONFIG).height;
}
