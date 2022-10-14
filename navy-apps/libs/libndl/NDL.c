#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
struct timeval tv;
int keyboard_fd;
FILE *vga_fd;
uint32_t NDL_GetTicks() {
  gettimeofday(&tv,NULL);
  return tv.tv_usec;
}

int NDL_PollEvent(char* buf, int len) {
    char key[32];
    int n = 32 < len ? 32 : len;
    ssize_t size = read(keyboard_fd, key, n);
    if (size == 0) {
        return 0;
    }
    strncpy(buf, key, 32);
    return 1;
}

void NDL_OpenCanvas(int *w, int *h) {    //只需要记录画布的大小

  w = 400; //(简化)
  h = 300;
  printf("W = %d , H = %d\n",w,h);
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  } 
}
//通过往/dev/fb中的正确位置写入像素信息来绘制图像. 你需要梳理清楚系统屏幕(即frame buffer), 
//NDL_OpenCanvas()打开的画布, 以及NDL_DrawRect()指示的绘制区域之间的位置关系.
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  FILE *vga_fd = fopen("/dev/fb","w+");
  if(w==0||h==0)
    assert("w or h == 0");
  printf("x =%d,y =%d,w =%d,h =%d\n",x,y,w,h);
  fseek(vga_fd, 0, SEEK_SET);              //设置初始画布指针位置
  for(int i = y ; i < (y+h) ; i++){        //从y开始写h行
    fseek(vga_fd, 300*i, SEEK_SET);       //写完一行后设置画布指针在下一行的初始位置
    for(int j = x ; j < (x+w) ; j++){      //从x开始写w个
      printf("write i = %d , j = %d,pixels = %x\n",i,j,pixels[i*128+j]);
      fwrite(pixels[i*128+j],128,1,vga_fd);      //写入像素
    }
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  keyboard_fd = open("/dev/events","r+");
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  tv.tv_sec  = 0;
  tv.tv_usec = 0;
  return 0;
}

void NDL_Quit() {
}
