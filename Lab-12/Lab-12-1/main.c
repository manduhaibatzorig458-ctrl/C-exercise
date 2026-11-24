#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr;     /* бидний хандах файлд ашиглах заагч*/
    char ch;
    
    fPtr = fopen("D:\\2019-2020\\cs101\\file1.txt", "r");
    /* fopen() функц файлыг олоогүй бол NULL утга буцаана*/
    if(fPtr == NULL)
    {
        printf("File-g neeh bolomjgui.\n"); /* Хэрэв файлыг нээх боломжгүй бол exit */
        printf("File aa shalgana uu.\n");
        exit(EXIT_FAILURE);
    }
    /* Файл амжилттай нээсэн тухай тайлбар*/
    printf("File amjilttai neeglee. Ugugdliig temdegteer ni unshij bna. \n\n");
    do
    {
        ch = fgetc(fPtr); /* Файлаас нэг тэмдэг уншина */
        putchar(ch); /* Уншсан тэмдэгтийг хэвлэнэ*/
    } while(ch != EOF); /* энэ үйлдлийг сүүлчийн тэмдэгт EOF биш бол давтана */
    fclose(fPtr); /* Файлыг уншиж дуусаад хаана. */
    return 0;
}