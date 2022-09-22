#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint8_t keystate[83] = {0};

int SDL_PushEvent(SDL_Event *ev) {
  printf("pushEvent \n");
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
    //printf("poll_event buf:%s key_len %d \n",buf,key_len);
    memcpy(key,(buf+3),key_len+1);

    for(int i=0;i<83;i++){//search for the keycode
      if(strcmp(keyname[i],key) == 0){
        key_code = i;
        break;
      }
    }
    if((buf[0] == 'k')&&(buf[1] == 'd')){
      ev->type = SDL_KEYDOWN;
      keystate[key_code] = 1;
    }
    else{
      ev->type = SDL_KEYUP;
      keystate[key_code] = 0;
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
    //printf("wait_event buf:%s key_len %d \n",buf,key_len);
    memcpy(key,(buf+3),key_len+1);

    for(int i=0;i<83;i++){//search for the keycode
      if(strcmp(keyname[i],key) == 0){
        key_code = i;
        break;
      }
    }
    if((buf[0] == 'k')&&(buf[1] == 'd')){
      event->type = SDL_KEYDOWN;
      keystate[key_code] = 1;
    }
    else{
      event->type = SDL_KEYUP;
      keystate[key_code] = 0;
    }
    //printf("keycode 73:%s key:%s len73:%d len:%d\n",keyname[73],key,strlen(keyname[73]),strlen(key));
    //printf("got key %s keycode %d \n",key,key_code);
    event->key.keysym.sym = key_code;
    return 1;
  }
  return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("PeepEvent \n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //printf("getstate\n");

  // int res = 0;
  // char buf[100];
  // memset(buf,0,100);
  // char key[30];
  // int str_len;
  // int key_len;
  // int key_code = 0;
  // res = NDL_PollEvent(buf, 100);
  // printf("res %d \n",res);
  // if(res == 1){
  //   str_len = strlen(buf);
  //   key_len = str_len - 3;
  //   printf("getstate buf:%s key_len %d \n",buf,key_len);
  //   memcpy(key,(buf+3),key_len+1);
  //   for(int i=0;i<83;i++){//search for the keycode
  //     if(strcmp(keyname[i],key) == 0){
  //       key_code = i;
  //       break;
  //     }
  //   }
  //   printf("key code %d \n",key_code);
  //   memset(keystate,0,sizeof(keystate));
  //   keystate[key_code] = 1;
  //   if(numkeys != NULL){
  //     *numkeys = 83;
  //   }
  // }
  // else{
  //   //printf("res %d \n",res);
  //   memset(keystate,0,sizeof(keystate));
  //   if(numkeys != NULL){
  //     *numkeys = 83;
  //   }
  // }
  if(numkeys != NULL){
      *numkeys = 83;
    }
  return keystate;
}
