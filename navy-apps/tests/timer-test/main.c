#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gettimeofday (struct timeval *ptimeval,
     void *ptimezone);

int main()
{
  int time_use = 0;
  struct timeval start;
  struct timeval end;

  gettimeofday(&start,NULL); 
  while(1){
    gettimeofday(&end,NULL);
    time_use=(end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);//微秒
    if(time_use >= 500000){
      printf("hello!\n");
      gettimeofday(&start,NULL); 
    }
  }
  return 0;
}