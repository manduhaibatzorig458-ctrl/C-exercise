#include <stdio.h>
#include <math.h>

int main() {
    int i = 2;
    int count = 0;
    double sumLog = 0;
    double geometricMean;

    while (i <= 200) {
        sumLog = sumLog + log(i);
        count++;
        i = i + 4;
    }

    geometricMean = exp(sumLog / count);

    printf("Niit utga = %d\n", count);
    printf("Geometric dundaj = %.2f", geometricMean);

    return 0;
}