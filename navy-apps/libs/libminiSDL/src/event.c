#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  int res = 0;
  char buf[100];
  char key[30];
  char *pos;
  int key_len;
  int key_code = 0;
  res = NDL_PollEvent(buf, 100);
  if(res == 1){
    pos = strchr(buf,'\n');
    key_len = pos - buf - 3;
    memcpy(key,(buf+3),key_len);
    for(int i=0;i<83;i++){//search for the keycode
      if(strcmp(keyname[i],key) == 0){
        key_code = i;
        break;
      }
    }
    if((buf[0] == 'k')&&(buf[0] == 'd')){
      ev->type = SDL_KEYDOWN;
    }
    else{
      ev->type = SDL_KEYUP;
    }
    printf("got key %s keycode %d \n",key,key_code);
    ev->key.keysym.sym = key_code;
    return 1;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
