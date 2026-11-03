#include <stdio.h>

int main() {
    double a[20];

    printf("20 too oruulna uu:\n");

    for (int i = 0; i < 20; i++) {
        scanf("%lf", &a[i]);
    }

    printf("Ur dun:\n");

    for (int i = 19; i >= 10; i--) {
        printf("%.2lf ", a[i]);
        printf("%.2lf ", a[i - 10]);
    }

    return 0;
}
