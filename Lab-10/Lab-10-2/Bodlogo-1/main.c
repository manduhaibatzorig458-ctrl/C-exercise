#include <stdio.h>                  // printf, gets ашиглах сан
#include <string.h>                 // strlen функц ашиглах сан
#include <stdlib.h>                 // system("pause") ашиглах сан
#define MAX_SIZE 100                // мөрийн дээд хэмжээ

int main()
{
    char text[MAX_SIZE];            // 100 тэмдэгт багтах мөр зарлана
    int length;                     // мөрийн уртыг хадгалах хувьсагч

    printf("Enter any string: ");   // мөр оруулахыг хүснэ
    gets(text);                     // мөрийг гараас уншина

    length = strlen(text);          // strlen() мөрийн уртыг буцаана

    printf("Length of '%s' = %d", text, length);  // мөр ба уртыг хэвлэнэ
    printf("\n");                   // шинэ мөр рүү орно
    system("pause");                // дэлгэцийг хаахгүй хүлээнэ

    return 0;                       // програм амжилттай дууслаа
}