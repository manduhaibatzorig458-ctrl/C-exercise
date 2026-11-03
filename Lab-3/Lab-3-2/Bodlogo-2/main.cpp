#include <stdio.h>

int main()
{
    int n;

    printf("Too oruulna uu: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Ereg too\n");
    }
    else if (n < 0)
    {
        printf("Sorog too\n");
    }
    else
    {
        printf("Teg too\n");
    }

    if (n % 2 == 0)
    {
        printf("Tegsh too\n");
    }
    else
    {
        printf("Sondgoi too\n");
    }

    return 0;
}

