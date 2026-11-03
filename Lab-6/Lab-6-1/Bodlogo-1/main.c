#include <stdio.h>

double factorial (int k){
 int j;
 double fact = 1;
 
 for (j = 1; j <= k; j++){
   fact = fact * j;
 }
 return fact; 
}

double zUtga(double x, int M) {
    int k;
    double z = 1;

    for (k = 3; k <= M; k = k + 2) {
        z = z + k * x / factorial(k);
    }

    return z;
}

int main() {
    int M;
    double x, z;

    printf("x-iin utgiig oruulna uu: ");
    scanf("%lf", &x);
    printf("M-iin utgiig oruulna uu (sondgoi too): ");
    scanf("%d", &M);

    z = zUtga(x, M);

    printf("z = %.4f\n", z);
    return 0;
}