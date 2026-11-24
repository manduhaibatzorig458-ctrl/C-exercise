#include <stdio.h>                  // printf, scanf ашиглах сан

int hiex(int n, int m);             // рекурсив функцийн прототип

int main()
{
    int n, m;                       // оруулах хоёр натурал тоо
    int result;                     // ХИЕХ-ийн үр дүн

    printf("Enter n: ");            
    scanf("%d", &n);
    printf("Enter m: ");           
    scanf("%d", &m);

    result = hiex(n, m);            // рекурсив функцийг дуудна

    printf("HIEH(%d, %d) = %d\n", n, m, result);   // үр дүнг хэвлэнэ

    return 0;
}

int hiex(int n, int m)
{
    int r = n % m;                  // n-ийг m-д хуваасан үлдэгдэл

    if (r == 0)                     // үндсэн нөхцөл: үлдэгдэл 0 бол
        return m;                   // хариу нь m, рекурс зогсоно
    else
        return hiex(m, r);          // ХИЕХ(n, m) = ХИЕХ(m, r), өөрийгөө дуудна
}