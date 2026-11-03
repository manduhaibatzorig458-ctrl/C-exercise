#include <stdio.h>

int main()
{
    int K;
    int aravt;
    int negj;
    int urvuu;

    printf("K toog oruulna uu: ");
    scanf("%d", &K);

    if (K >= 10 && K <= 99)
    {
        aravt = K / 10;
        negj = K % 10;

        printf("Digit-uudiin niilber = %d\n", aravt + negj);
    }
    else
    {
        urvuu = (K % 10) * 10 + K / 10;

        printf("Urvuu utga = %d\n", urvuu);
    }

    return 0;
}