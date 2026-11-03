#include <stdio.h>

int main()
{
    float a, b, c;
    float max;

    printf("a, b, c toonuudiig oruulna uu: ");
    scanf("%f %f %f", &a, &b, &c);

    max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("Hamgiin ih too = %.2f\n", max);

    return 0;
}
