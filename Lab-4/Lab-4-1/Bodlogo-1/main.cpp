#include <stdio.h>

int main (){
 int R;
 float y;
  
  printf("R- toog oruulna uu:");
  scanf("%d", &R);
  
  if(R % 2 == 0){
   y = R * R;
  } else {
    y = (R + 1.0) / (R * R);
   };
   printf("%.4f\n", y);
  return 0;
}     