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
extern uint32_t *fb_canva;
size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i = 0;
  for(i=0;i<len;i++){
      putch( ((char*)buf)[i] );//输出i个字符
    }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {

  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  
  if(ev.keycode == 0){
    return 0;
  }else if(ev.keydown){
    printf("ev.keycode = %d\n",ev.keycode );
    sprintf(buf,"kd %s\n",keyname[ev.keycode]);
    return len;
  }else{
    sprintf(buf,"ku %s\n",keyname[ev.keycode]);
    return len;
  }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  printf("dispinfo\n");
  return 0;
}

//用于把buf中的len字节写到屏幕上offset处. 你需要先从offset计算出屏幕上的坐标, 
//然后调用IOE来进行绘图. 另外我们约定每次绘图后总是马上将frame buffer中的内容同步到屏幕上.
size_t fb_write(const void *buf, size_t offset, size_t len) {
  printf("offset = %d , len = %d\n",offset,len);
  //strncpy(fb_canva,buf,32);
  //fb_canva[1] = 0;
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
