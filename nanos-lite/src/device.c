#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i = 0;
  for(i=0;i<len;i++){
      putch( ((char*)buf)[i] );//输出i个字符
    }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  size_t updown   = io_read(AM_INPUT_KEYBRD).keydown;
  size_t key_code = io_read(AM_INPUT_KEYBRD).keycode;
  if(updown){
    sprintf(buf,"kd %s\n",keyname[key_code]);
  }else{
    printf("key_code = %d\n",key_code);
    sprintf(buf,"ku %s\n",keyname[key_code]);
  }
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
