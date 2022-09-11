#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

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
      printf("pos1 %c width %d\n",*pos,width);
      width = (width * 10) + (*pos-'0');
      pos++;
    }
    char *pos2 = strchr(pos,':');
    pos2++;
    while(*pos2 == ' '){
      pos2++;
    }
    while(*pos2 != '\n'){
      printf("pos2 %c height %d\n",*pos2,height);
      height = (height * 10) + (*pos2-'0');
      pos2++;
    }
    *w = width;
    *h = height;
    printf("width:%d height %d \n",screen_w,screen_h);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
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
  return 0;
}

void NDL_Quit() {
}
