#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint64_t a = inl(KBD_ADDR);
    kbd->keydown = (a & KEYDOWN_MASK) ? true : false;
    kbd->keycode = a & ~KEYDOWN_MASK;
}
