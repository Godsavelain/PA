#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int system_w = 0, system_h = 0;

int gettimeofday (struct timeval *ptimeval,
     void *ptimezone);

uint32_t NDL_GetTicks() {
  struct timeval start;
  gettimeofday(&start,NULL);
  time_t time_use = 0;
  time_use = start.tv_sec * 1000 + start.tv_usec/1000;
  return time_use;
}

int NDL_PollEvent(char *buf, int len) {
  FILE *fp = fopen("/dev/events", "r");
  int num = 0;
  num = fread(buf, 1, len, fp);
  //printf("num %d string %s \n",num,buf);
  fclose(fp);
  printf("num %d \n",num);
  return num;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  else{
    if((*w == 0) && (*h == 0)){
      *w = system_w;
      *h = system_h;
    }
    else{
      screen_w = *w;
      screen_h = *h;
    } 
    //printf("width:%d height %d \n",*w,*h);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  printf("x:%d y:%d w:%d h:%d \n",x,y,w,h);
  printf("screen_w %d screen_h %d system_w %d system_h %d\n",screen_w,screen_h,system_w,system_h);
  int x_margin,y_margin;
  x_margin = (system_w - screen_w) / 2;
  y_margin = (system_h - screen_h) / 2;
  printf("x_margin:%d y_margin:%d \n",x_margin,y_margin);
  int true_x,true_y;
  true_x = x + x_margin;
  true_y = y + y_margin;
  FILE *fp = fopen("/dev/fb", "w");

  int offset = 0;
  int true_offset = 0;
  size_t write_len = 0;
  for(int i=true_y; i<true_y+h; i++){//i : true y
    if(i >= (system_h - y_margin)){
      break;
    }
    offset = (i - y_margin) * screen_w + x;
    true_offset = i * system_w + x + x_margin;
    fseek(fp, (true_offset * 4) ,SEEK_SET);
    write_len = (((x + w) > system_w)? (system_w - x) : w);
    fwrite((pixels+offset), 4,  write_len , fp);
    //printf("offset:%d write_len:%ld \n",offset,write_len);
  }
  fclose(fp);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  FILE *fp = fopen("/proc/dispinfo", "r");
  char buf1[100];
  int width = 0;
  int height = 0;
  fread(buf1, 1, 100, fp);
  char *pos = strchr(buf1,':');
  pos++;
  while(*pos == ' '){
    pos++;
  }
  while(*pos != '\n'){
    //printf("pos1 %c width %d\n",*pos,width);
    width = (width * 10) + (*pos-'0');
    pos++;
  }
  char *pos2 = strchr(pos,':');
  pos2++;
  while(*pos2 == ' '){
    pos2++;
  }
  while(*pos2 != '\n'){
    //printf("pos2 %c height %d\n",*pos2,height);
    height = (height * 10) + (*pos2-'0');
    pos2++;
  }
  system_w = width;
  system_h = height;
  return 0;
}

void NDL_Quit() {
}
