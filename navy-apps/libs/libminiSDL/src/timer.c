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
  uint32_t time1 = NDL_GetTicks();
  uint32_t time2 = NDL_GetTicks();
  while(time2 - time1 < ms){
    //printf("time2 %d time1 %d",time2,time1);
     time2 = NDL_GetTicks();
  }
  return;
}
