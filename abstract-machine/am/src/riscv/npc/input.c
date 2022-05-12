#include <am.h>
#include "npc.h"

#define KEYDOWN_MASK 0x8000
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N  32
int W;
int H;

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = *(volatile uint32_t *)(KBD_ADDR);
  if(data > 100)
  {
    int num = data - 32768;
    //key_pushed[num] = true;
    //printf("key %s pushed down\n",keys[num]);
    kbd->keydown = true;
    kbd->keycode = num;
  }
  else
  {
    kbd->keydown = false;
    kbd->keycode = data;
  }
  // kbd->keydown = 0;
  // kbd->keycode = AM_KEY_NONE;
}

void __am_gpu_init() {
   int i;
   W = io_read(AM_GPU_CONFIG).width ;  
   H = io_read(AM_GPU_CONFIG).height ;  
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
