#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 1: printf("EXCEPTION YIELD!\n");break;//YIELD
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}