#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

#define N   32
int W;
int H;

void __am_gpu_init() {
   int i;
   W = io_read(AM_GPU_CONFIG).width ;  // TODO: get the correct width
   H = io_read(AM_GPU_CONFIG).height ;  // TODO: get the correct height
   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
   for (i = 0; i < W * H; i ++) fb[i] = i;
   outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  int width;
  int height;
  height = inw(VGACTL_ADDR);
  width = inw(VGACTL_ADDR + 2);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = width * height * sizeof(uint32_t)
    // .width = 0, .height = 0,
    // .vmemsz = 0
    
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    int x = ctl->x;
    int y = ctl->y;
    int w = ctl->w;
    int h = ctl->h;
    bool sync = ctl->sync;
    printf("x:%d y:%d w:%d h:%d W:%d \n",x,y,w,h,W);
    void *f =ctl->pixels;
    printf("f address %d\n",(uintptr_t)f);
    printf("x:%d y:%d w:%d h:%d W:%d sync %d pixel%d \n",x,y,w,h,W,sync,inl((uintptr_t)f));

    for(int i = 0;i < h;i++)
    {
      uint32_t data;
      for(int j=0;j<w;j++)
      {
        data = inl((uintptr_t)f + (i*w + j)*sizeof(uint32_t));
        outl(FB_ADDR + ((i+y)*W + x + j) * sizeof(uint32_t), data );
      }
        //printf("out %d to addr %d",*f_temp,FB_ADDR + i*W + x + j);
    }
    if(sync)
    {
    outl(SYNC_ADDR, 1);
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
