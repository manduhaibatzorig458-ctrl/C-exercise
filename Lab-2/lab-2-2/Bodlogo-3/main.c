#include <stdio.h>
int main()
{
    int M;
    int i;

    printf("M toog oruulna uu: ");
    scanf("%d", &M);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", M, i, M * i);
    }

    return 0;
}