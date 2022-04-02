#include <am.h>
#include <nemu.h>
#include <stdio.h>

void __am_timer_init() {
  outl((uintptr_t)RTC_ADDR, 0);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t current;
  // current = 0;
  //putch('a');
  current = inl((uintptr_t) RTC_ADDR);
  printf("current:%u\n",current);
  uptime->us = current;
  //putch('b');
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
