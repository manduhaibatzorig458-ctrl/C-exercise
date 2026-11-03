#include <stdio.h>

double average(int M, int E)
{
    int i = M;
    int sum = 0;
    int count = 0;

    while (i <= E)
    {
        sum = sum + i;
        count++;
        i++;
    }

    return (double)sum / count;
}

int main()
{
    int M, E;
    double result;

    printf("M = ");
    scanf("%d", &M);

    printf("E = ");
    scanf("%d", &E);

    result = average(M, E);

    printf("Arithmetic average = %.2lf\n", result);

    return 0;
}




// Энэ программ нь хэрэглэгчийн оруулсан M-ээс E хүртэлх бүхэл тоонуудын арифметик дунджийг олно.
// average() функц нь while давталтаар тоонуудыг нэмж sum-д хадгалаад, хэдэн тоо байгааг count-оор тоолно.
// Дараа нь sum-ийг count-д хувааж дунджийг олно.
// Эцэст нь main() функц хариуг таслалаас хойш 2 оронтойгоор дэлгэцэнд хэвлэнэ.