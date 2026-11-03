#include <stdio.h>

int main()
{
    float r;
    float S;

    printf("Toirgiin radiusiig oruulna uu: ");
    scanf("%f", &r);

    S = 3.14 * r * r;

    printf("Toirgiin talbai = %.2f\n", S);

    return 0;
}