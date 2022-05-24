#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t a = inl(KBD_ADDR);
  if(a != 0){
    kbd->keydown = (a & KEYDOWN_MASK) ? true : false;
    kbd->keycode = 2;
  }
  else{
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  }
}
