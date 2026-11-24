#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPtr;   /* бидний хандах файлд ашиглах заагч */
    int ch;       /* EOF-г зөв шалгахын тулд int төрөл ашиглана */

    fPtr = fopen("D:\\2019-2020\\cs101\\file1.txt", "r");

    /* fopen() функц файлыг олоогүй бол NULL утга буцаана */
    if (fPtr == NULL)
    {
        printf("File-g neeh bolomjgui.\n");   /* нээх боломжгүй бол exit */
        printf("File aa shalgana uu.\n");
        exit(EXIT_FAILURE);
    }

    /* Файл амжилттай нээсэн тухай тайлбар */
    printf("File amjilttai neeglee. Ugugdliig temdegteer ni unshij bna.\n\n");

    /* Файлаас нэг тэмдэг уншина, EOF болтол давтана */
    while ((ch = fgetc(fPtr)) != EOF)
    {
        putchar(ch);   /* Уншсан тэмдэгтийг хэвлэнэ */
    }

    fclose(fPtr);      /* Файлыг уншиж дуусаад хаана */
    return 0;
}