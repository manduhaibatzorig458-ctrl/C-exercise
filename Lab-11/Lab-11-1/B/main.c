/**
 * Өгөгдсөн хоёр хязгаарын хоорондох натурал тоонуудыг рекурс ашиглан хэвлэнэ
 */

#include <stdio.h>                  // printf, scanf ашиглах сан

/* Рекурс функцийн прототип (зарлалт) */
void printNaturalNumbers(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;     // доод ба дээд хязгаар

    /* Хэрэглэгчээс доод ба дээд хязгаарыг уншина */
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);       // доод хязгаарыг уншина
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);       // дээд хязгаарыг уншина

    printf("All natural numbers between %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);   // рекурс функцийг дуудна

    return 0;                       // програм амжилттай дууслаа
}

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if (lowerLimit > upperLimit)    // үндсэн нөхцөл: доод хязгаар дээдээсээ хэтэрвэл
        return;                     // функцээс гарч рекурсийг зогсооно

    printf("%d, ", lowerLimit);     // одоогийн тоог хэвлэнэ

    // Доод хязгаарыг 1-ээр нэмж, функц өөрийгөө дахин дуудна
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}