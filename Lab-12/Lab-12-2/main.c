#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inPtr, *evenPtr, *oddPtr;
    int num;

    /* input.txt файлыг унших горимоор нээнэ */
    inPtr = fopen("input.txt", "r");
    if (inPtr == NULL)
    {
        printf("input.txt файлыг нээх боломжгүй.\n");
        exit(EXIT_FAILURE);
    }

    /* even.txt, odd.txt файлуудыг бичих горимоор нээнэ */
    evenPtr = fopen("even.txt", "w");
    oddPtr = fopen("odd.txt", "w");
    if (evenPtr == NULL || oddPtr == NULL)
    {
        printf("Гаралтын файлыг үүсгэж чадсангүй.\n");
        fclose(inPtr);
        if (evenPtr != NULL) fclose(evenPtr);
        if (oddPtr != NULL) fclose(oddPtr);
        exit(EXIT_FAILURE);
    }

    /* Файлаас тоог нэг нэгээр нь уншиж, тэгш/сондгойг ялгана */
    while (fscanf(inPtr, "%d", &num) == 1)
    {
        if (num % 2 == 0)
            fprintf(evenPtr, "%d ", num);
        else
            fprintf(oddPtr, "%d ", num);
    }

    /* Бүх файлыг хаана */
    fclose(inPtr);
    fclose(evenPtr);
    fclose(oddPtr);

    printf("Амжилттай бичигдлээ.\n");
    return 0;
}