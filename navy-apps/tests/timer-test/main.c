#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <NDL.h>

int gettimeofday (struct timeval *ptimeval,
     void *ptimezone);

int main()
{
  // int time_use =0;
  // struct timeval start;
  // struct timeval end;

  // gettimeofday(&start,NULL); 
  // while(1){
  //   gettimeofday(&end,NULL);
  //   time_use=(end.tv_sec-start.tv_sec)*1000000 + (end.tv_usec-start.tv_usec);//微秒
  //   if(time_use >= 500000){
  //     printf("hello!\n");
  //     //printf("%d \n",time_use);
  //     gettimeofday(&start,NULL); 
  //   }
  // }
  NDL_Init(0);

  time_t new_clicks = 0;
  time_t old_clicks = 0;
  time_t used_time = 0;
  old_clicks = NDL_GetTicks();
  while(1){
    new_clicks = NDL_GetTicks();
    used_time = new_clicks - old_clicks;
    if(used_time > 500){
      old_clicks = NDL_GetTicks();
      printf("hello!\n");
    }
  }

  return 0;
}