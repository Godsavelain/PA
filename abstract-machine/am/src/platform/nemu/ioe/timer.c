#include <am.h>
#include <nemu.h>
//#include <stdio.h>

uint32_t begin_time;

void __am_timer_init() {
  //begin_time = inl(RTC_ADDR);
  begin_time = *(volatile uint32_t *)RTC_ADDR;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t current_time;
  //current_time = inl(RTC_ADDR);
  current_time = *(volatile uint32_t *)RTC_ADDR;
  //printf("current:%d \n",current_time);
  uptime->us = (current_time - begin_time);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
