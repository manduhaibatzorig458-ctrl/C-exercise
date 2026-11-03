#include <stdio.h>

int main(void) {
    double a[21];
    int i, k;

    for (i = 1; i <= 20; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }

    for (k = 0; k <= 10; k++) {
        printf("%g ", a[20 - k]);
        printf("%g ", a[11 - k]);
    }
    printf("\n");

    return 0;
}