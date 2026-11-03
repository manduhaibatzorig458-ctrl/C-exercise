#include <stdio.h>

int main() {
    int A[10];
    long long ur = 1;   // үржвэр их тоо болох тул long long
    int i;

    for (i = 0; i < 10; i++) {
        A[i] = i * 3 + 1;   // индексийг 3-аар үржүүлээд 1 нэмнэ
        ur = ur * A[i];     // үржвэрт нэмж үржүүлнэ
    }

    printf("Урвэр = %lld", ur);
    return 0;
}





