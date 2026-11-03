#include <stdio.h>

// Функц-1: А, В-ийн аль их нь
int func1(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Функц-2: 1-ээс N хүртэлх нийлбэр
int func2(int n) {
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int a, b, n;
    int r1, r2;

    printf("A, B оруул: ");
    scanf("%d %d", &a, &b);
    printf("N оруул: ");
    scanf("%d", &n);

    r1 = func1(a, b);
    r2 = func2(n);

    printf("Функц-1 = %d\n", r1);
    printf("Функц-2 = %d\n", r2);
    printf("Программын хариу = %d", r1 + r2);
    return 0;
}


        //      my name                         //.        fucking shier