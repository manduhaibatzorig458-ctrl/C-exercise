#include <stdio.h>

double a0, a1, a2, a3, a4, a5, a6;

double p(double y) {
    double result;

    result = a0 + a1*y + a2*y*y + a3*y*y*y
           + a4*y*y*y*y + a5*y*y*y*y*y + a6*y*y*y*y*y*y;

    return result;
}

int main() {
    double x, r;

    printf("a0 a1 a2 a3 a4 a5 a6 oruulna uu: ");
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a0, &a1, &a2, &a3, &a4, &a5, &a6);

    x = 1;
    r = p(x + 1) - p(x);
    printf("x = 1 ued: %.2f\n", r);

    x = 3;
    r = p(x + 1) - p(x);
    printf("x = 3 ued: %.2f\n", r);

    x = 4;
    r = p(x + 1) - p(x);
    printf("x = 4 ued: %.2f\n", r);

    return 0;
}

