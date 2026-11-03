#include <stdio.h>

int main()
{
    int n;
    int zuu, aravt, negj;

    printf("3 orontoi too oruulna uu: ");
    scanf("%d", &n);

    zuu = n / 100;
    aravt = (n / 10) % 10;
    negj = n % 10;

    printf("Zuunii oron = %d\n", zuu);
    printf("Aravtiin oron = %d\n", aravt);
    printf("Negjiin oron = %d\n", negj);

    return 0;
}