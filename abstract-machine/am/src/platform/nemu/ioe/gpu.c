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
   printf("W %d H %d \n",W,H);
   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
   int size = W * H;
   for (i = 0; i < size; i ++) fb[i] = i;
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
    int x = ctl->x;
    int y = ctl->y;
    int w = ctl->w;
    int h = ctl->h;
    bool sync = ctl->sync;
    void *f =ctl->pixels;
    if(f != NULL)
    {
      for(int i = 0;i < h;i++)
    {
      uint32_t data;
      for(int j=0;j<w;j++)
      {
        data = inl((uintptr_t)f + (i*w + j)*sizeof(uint32_t));
        outl(FB_ADDR + ((i+y)*W + x + j) * sizeof(uint32_t), data );
        int addr = (0xa0000000 + 0x1000000 + ((i+y)*W + x + j) * sizeof(uint32_t));
        if(addr == 0xa1000018 ){
          printf("write %d to fb %d\n", data,addr);
        }  
      }
    }
    }
    if(sync)
    {
    outl(SYNC_ADDR, 1);
    }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
