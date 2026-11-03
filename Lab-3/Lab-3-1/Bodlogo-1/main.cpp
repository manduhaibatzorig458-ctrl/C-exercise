#include <stdio.h>

int main()
{
    int nas;

    printf("Nasaa oruulna uu: ");
    scanf("%d", &nas);

    if (nas < 20)
    {
        printf("Usvuriin nas\n");
    }
    else if (nas >= 20 && nas < 40)
    {
        printf("Zaluu nas\n");
    }
    else
    {
        printf("Ahimag nas\n");
    }

    return 0;
}