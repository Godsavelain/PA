#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  return 1;
}

uint32_t SDL_GetTicks() {
  uint32_t ticks = NDL_GetTicks();
  return ticks;
}

void SDL_Delay(uint32_t ms) {
  //printf("Delay \n");
}
