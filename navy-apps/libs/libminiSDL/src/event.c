#include <NDL.h>
#include <SDL.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent NO");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  printf("SDL_PollEvent NO");
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  if(NDL_PollEvent(buf, sizeof(buf))){
    for(int i=3;i<5;i++)
      printf("%d\n",buf[i]-'0'); 
    //if(buf[1]==)
    //  event->type = SDL_KEYDOWN;
    //event->key.keysym.sym = SDLK_DOWN;
  }
  //printf("SDL_WaitEvent NO");
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents NO");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("SDL_GetKeyState NO");
  return NULL;
}
