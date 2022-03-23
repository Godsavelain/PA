#include <stdio.h>
#include <stdlib.h>

int main() { 
  uint  result1 = 130329728 * 162798599 ;//= 2201925504
 uint result2= 140925927 / 196816754;// = 0
 uint result3= 241721398 - 20107165;// = 221614233
 uint result4= 221614233 * 108834195;// = 1754623195
// 0 * 1754623195 = 0
// 0 * 104995989 = 0
 uint result5= 2201925504 + 0; //= 2201925504
 uint result6= 852196376 * 499323870; //= 1693672656
 uint result7= 1693672656 / 405131690;// = 4
 uint result8= 2201925504 - 4;// = 2201925500
 uint result9= 174188307 * 210641181;// = 3697975335
 uint result10= 3697975335 / 400668170;// = 9
 uint result11= 2201925500 - 9;// = 2201925491
 uint result12 = 2201925491 - 576997847;// = 1624927644
  printf("%u\n", result1); 
  printf("%u\n", result2); 
  printf("%u\n", result3); 
  printf("%u\n", result4); 
  printf("%u\n", result5); 
  printf("%u\n", result6); 
  printf("%u\n", result7); 
  printf("%u\n", result8); 
  printf("%u\n", result9); 
  printf("%u\n", result10); 
  printf("%u\n", result11); 
  printf("%u\n", result12); 
  return 0; 
}
