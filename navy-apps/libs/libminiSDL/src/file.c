#include <sdl-file.h>

SDL_RWops* SDL_RWFromFile(const char *filename, const char *mode) {
  printf("SDL_RWFromFile NO");
  return NULL;
}

SDL_RWops* SDL_RWFromMem(void *mem, int size) {
  printf("SDL_RWFromMem NO");
  return NULL;
}
