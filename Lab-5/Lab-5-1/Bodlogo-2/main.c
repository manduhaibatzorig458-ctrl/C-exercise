#include <stdio.h>

int main(){
    int M, k, j;
    double x, z, fact;

    printf("x-iin utgiig oruulna uu: ");
    scanf("%lf", &x);
    printf("M-iin utgiig oruulna uu (sondgoi too): ");
    scanf("%d", &M);

    z = 1;
    for (k = 3; k <= M; k = k + 2){
        fact = 1;
        for (j = 1; j <= k; j++){
            fact = fact * j;
        }
        z = z + k * x / fact;
    }

    printf("z = %.4f\n", z);
    return 0;
}


