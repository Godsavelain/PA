#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = *(volatile uint32_t *)(KBD_ADDR);
  if((data>0)&&(data < 100000)) 
  {
    printf("d: %d\n",data);
  }
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
}
