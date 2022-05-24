#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t a = inl(KBD_ADDR);
  if(a != 0){
    kbd->keydown = 1;
    kbd->keycode = a;
  }
  else{
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  }
    //kbd->keydown = (a & KEYDOWN_MASK) ? true : false;   //最高位确定是否按下
    //kbd->keycode = a & ~KEYDOWN_MASK;
}
