
#include <stdio.h>

int main() {
    int A[3][3];
    int T;

    printf("3x3 массивын элементүүдийг оруулна уу:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("T тоог оруулна уу: ");
    scanf("%d", &T);

    printf("T-ээс бага элементүүд:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] < T) {
                printf("%d ", A[i][j]);
            }
        }
    }

    return 0;
}





