#include <common.h>

static Context* do_event(Event e, Context* c) {
  printf("e.event = %d\n",e.event);
  switch (e.event) {
    case 1 : panic("Event ID = 1 is EVENT_YIELD!");
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
