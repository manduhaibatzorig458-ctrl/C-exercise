#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 15; i++)
    {
        printf("(%d, %d)\n", i, i + 2);
    }

    return 0;
}