#include <am.h>
#include <nemu.h>

void __am_timer_init() {
  
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t current;
  current = inl((uintptr_t) 0xa0000048);
  uptime->us = current;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
