#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint64_t a = inl(0xa0000060);
  //if(a != 0){
    kbd->keydown = 1;
    kbd->keycode = a;
  //}
  //else{
  //  kbd->keydown = 0;
  //  kbd->keycode = AM_KEY_NONE;
  //}
}
