#include <stdio.h>

int main()
{
    float a, b, c;
    float D;

    printf("a, b, c koeffitsientuudiig oruulna uu: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        printf("2 bodit shiidtei\n");
    }
    else if (D == 0)
    {
        printf("1 bodit shiidtei\n");
    }
    else
    {
        printf("Bodit shiidgui\n");
    }

    return 0;
}