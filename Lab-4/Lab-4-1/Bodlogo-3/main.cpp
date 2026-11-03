#include <stdio.h>
 int main(){
  int M, E, i;
  int sum = 0;
  int count = 0;
  float average;
  
  printf("M-iin utgiig oruulna uu:");
  scanf("%d", &M);
  
  printf("E-iin utgiig oruulna uu");
  scanf("%d", &E);
  i = M;
  
  while (i <= E){
   sum = sum + 1;
    count++;
    i++;
  }
   
  if(count > 0){
   average = float (sum)/ count;
   printf("arifmetik dundaj = %.2f\n", average)
  }
  return 0;
 }
 
