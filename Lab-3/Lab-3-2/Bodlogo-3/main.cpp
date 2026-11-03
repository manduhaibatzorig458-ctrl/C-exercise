#include <stdio.h>

int main()
{
    int onoo;

    printf("Shalgaltin onoo oruulna uu: ");
    scanf("%d", &onoo);

    if (onoo >= 90 && onoo <= 100)
    {
        printf("A\n");
    }
    else if (onoo >= 80)
    {
        printf("B\n");
    }
    else if (onoo >= 70)
    {
        printf("C\n");
    }
    else if (onoo >= 60)
    {
        printf("D\n");
    }
    else if (onoo >= 0)
    {
        printf("F\n");
    }
    else
    {
        printf("Buruu onoo oruulsan baina\n");
    }

    return 0;
}
