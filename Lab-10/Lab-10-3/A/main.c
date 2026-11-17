#include <stdio.h>                  // printf, fgets ашиглах сан
#include <ctype.h>                  // isdigit функц ашиглах сан

#define MAX_SIZE 100                // мөрийн дээд хэмжээ

int main()
{
    char s[MAX_SIZE];               // тоог мөр хэлбэрээр хадгална
    int i;                          // индекс
    int count = 0;                  // оронгийн тоо, эхлээд 0

    printf("Enter a number: ");     // тоо оруулахыг хүснэ
    fgets(s, MAX_SIZE, stdin);      // тоог мөр болгон уншина

    for (i = 0; s[i] != '\0'; i++)  // мөрийн төгсгөл хүртэл давтана
    {
        if (isdigit(s[i]))          // тэмдэгт нь цифр бол
        {
            count++;                // оронгийн тоог 1-ээр нэмнэ
        }
    }

    printf("Number of digits = %d\n", count);   // оронгийн тоог хэвлэнэ

    return 0;                      
}