#include <stdio.h>

int main(){
    float a, b;
    float P, S;

    printf("Tegsh ontsogtnii urtiig oruulna uu: ");
    scanf("%f", &a);

    printf("Tegsh ontsogtnii orgoniig oruulna uu: ");
    scanf("%f", &b);

    S = a * b;
    P = 2 * (a + b);

    printf("Talbai = %.2f\n", S);
    printf("Perimetr = %.2f\n", P);

    return 0;
}