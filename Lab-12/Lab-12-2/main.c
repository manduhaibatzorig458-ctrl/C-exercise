#include <stdio.h> 

int main() {

    FILE *input, *even, *odd;  // 3 файл зарлаж байна
    int num;                   // Унших бүхэл тоог хадгалах хувьсагч

    input = fopen("input.txt", "r");

    // Файл нээгдсэн эсэхийг шалгах
    if (input == NULL) {
        printf("input.txt file oldsongui!\n");
        return 1;  // Програмыг зогсоох
    }

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even == NULL || odd == NULL) {
        printf("File neeh aldaa!\n");
        fclose(input);
        return 1;
    }

    // input.txt файлаас тоонуудыг нэг нэгээр унших
    while (fscanf(input, "%d", &num) == 1) {

        // Тоог 2-т хуваахад үлдэгдэл 0 бол тэгш
        if (num % 2 == 0) {
            fprintf(even, "%d ", num);
        }

        // Үгүй бол сондгой
        else {
            fprintf(odd, "%d ", num);
        }
    }

    // Бүх файлыг хаах
    fclose(input);
    fclose(even);
    fclose(odd);

    printf("Amjilttai!\n");

    return 0;  // Програм амжилттай дуусах
}

