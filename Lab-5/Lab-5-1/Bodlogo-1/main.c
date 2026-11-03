#include <stdio.h>

int main(){
    int n,i,j;
    int fact, sum;

    printf("n-iin utgiig oruulna uu:");
    scanf("%d", &n);

    sum = 0;
    for(i = 1; i <= n; i = i + 2){
        fact = 1;
        for( j = 1; j <= i; j++){
            fact = fact * j;
        }
        sum = sum + fact;
    }
   printf("Niilber = %d\n", sum);
    return 0;
}