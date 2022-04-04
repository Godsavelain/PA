#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000
// const char * const keys[] = {
//   "ESCAPE","F1","F2","F3","F4","F5","F6","F7","F8", "F9","F10","F11","F12",
//   "GRAVE", "1","2","3","4","5","6","7","8","9","0","MINUS","EQUALS","BACKSPACE", 
//   "TB","Q","W","E","R","T","Y","U","I", "O","P","LEFTBRACKET","RIGHTBRACKET","BACKSLASH",
//   "CPSLOCK","A","S","D","F","G","H","J","K","L","SEMICOLON","APOSTROPHE","RETURN",
//   "LSHIFT","Z","X","C","V","B","N","M","COMMA","PERIOD","SLASH","RSHIFT", 
//   "LCTRL","APPLICATION","LALT","SPACE","RLT","RTRL","UP","DOWN","LEFT","RIGHT",
//   "INSERT","DELETE","HOME","END","PAGEUP","PAGEDOWN"
// };
// bool key_pushed[100] = {false};

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

}
