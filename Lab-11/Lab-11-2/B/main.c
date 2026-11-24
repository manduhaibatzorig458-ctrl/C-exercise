#include <stdio.h>

int main()
{
    int n, m;                       
    int p = 2;                      // шалгах тоо, 2-оос эхэлнэ
    int hiex = 1;                   // хариу, эхлээд 1

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    int a = n, b = m;               // анхны тоог хадгалж үлдээнэ

    while (p <= a && p <= b)
    {
        // хоёр тоо хоёулаа p-д хуваагдаж байвал
        if (a % p == 0 && b % p == 0)
        {
            a = a / p;              // хоёуланг p-д хуваана
            b = b / p;
            hiex = hiex * p;        // p-г хариу руу үржүүлнэ
        }
        else
        {
            p = p + 1;              // хуваагдахгүй бол дараагийн тоо руу
        }
    }

    printf("HIEH(%d, %d) = %d\n", n, m, hiex);

    return 0;
}