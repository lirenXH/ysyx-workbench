#include <utils.h>

NEMUState nemu_state = { .state = NEMU_STOP };

int is_exit_status_bad() {
  int good = 
    (nemu_state.state == NEMU_QUIT);
  return !good;
}
