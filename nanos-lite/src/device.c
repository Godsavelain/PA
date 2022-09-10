#include <common.h>
#include <string.h>

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
  printf("read num %d \n",read_num);
  memcpy(temp_buf,"p",1);
  temp_buf = temp_buf + 1;
  read_num = read_num + 1;
  return read_num;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
