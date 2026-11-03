#include <stdio.h>
#include <stdlib.h>

int main() {
    int B[10];
    int i, n, p = 1;

    printf("Massivyn elementiin too oruul n= ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < n; i++) {
        p *= B[i];
    }

    printf("\nB massiviin elementuudiin urjver = %d", p);
    printf("\n\n");

    system("pause");
    return 0;
}


