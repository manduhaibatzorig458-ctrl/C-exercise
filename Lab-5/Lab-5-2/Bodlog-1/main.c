#include <stdio.h>

int main(){
 int n, a, i;
 int sum = 0;
 int count = 0;
 
 printf("n-iin utgiig oruulna uu:");
 scanf("%d", &n);
 
 for (i = 1; i <= n; i++){
   printf("a%d = ", i);
   scanf("%d", &a);
   
    if(a > 0){
      sum = sum + a;
    } else if (a < 0){
       count = count + 1;
      }
 }
    printf("Ereg gishuudyn niilber = %d\n", sum);
    printf("Sorog gishuudyn too = %d\n", count);
    
    return 0;
}
