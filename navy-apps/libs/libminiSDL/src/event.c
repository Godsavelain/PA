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
  memset(buf,0,100);
  char key[30];
  int str_len;
  int key_len;
  int key_code = 0;
  res = NDL_PollEvent(buf, 100);
  if(res == 1){
    str_len = strlen(buf);
    key_len = str_len - 3;
    printf("buf:%s key_len %d \n",buf,key_len);
    memcpy(key,(buf+3),key_len+1);

    for(int i=0;i<83;i++){//search for the keycode
      if(strcmp(keyname[i],key) == 0){
        key_code = i;
        break;
      }
    }
    if((buf[0] == 'k')&&(buf[1] == 'd')){
      ev->type = SDL_KEYDOWN;
    }
    else{
      ev->type = SDL_KEYUP;
    }
    //printf("keycode 73:%s key:%s len73:%d len:%d\n",keyname[73],key,strlen(keyname[73]),strlen(key));
    //printf("got key %s keycode %d \n",key,key_code);
    ev->key.keysym.sym = key_code;
    return 1;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  int res = 0;
  char buf[100];
  char key[30];
  int str_len;
  int key_len;
  int key_code = 0;
  while(res != 1){
    memset(buf,0,100);
    res = NDL_PollEvent(buf, 100);
  }
  if(res == 1){
    str_len = strlen(buf);
    key_len = str_len - 3;
    printf("buf:%s key_len %d \n",buf,key_len);
    memcpy(key,(buf+3),key_len+1);

    for(int i=0;i<83;i++){//search for the keycode
      if(strcmp(keyname[i],key) == 0){
        key_code = i;
        break;
      }
    }
    if((buf[0] == 'k')&&(buf[1] == 'd')){
      event->type = SDL_KEYDOWN;
    }
    else{
      event->type = SDL_KEYUP;
    }
    //printf("keycode 73:%s key:%s len73:%d len:%d\n",keyname[73],key,strlen(keyname[73]),strlen(key));
    //printf("got key %s keycode %d \n",key,key_code);
    event->key.keysym.sym = key_code;
    return 1;
  }
  return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
