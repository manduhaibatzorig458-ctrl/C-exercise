
#include <stdio.h>   // Файл унших, бичих функцуудыг ашиглах сан
#include <stdlib.h>  // system() функцийг ашиглах сан

int main() {  // Програмын үндсэн функц эхэлнэ

    FILE *fin, *feven, *fodd;  // Оролтын болон гаралтын файлуудын заагч хувьсагч зарлаж байна
    int d;  // Файлаас уншсан бүхэл тоог хадгалах хувьсагч

    fin = fopen("input.txt", "rt");   // input.txt файлыг текст хэлбэрээр уншихаар нээнэ
    feven = fopen("even.txt", "wt"); // even.txt файлыг тэгш тоо бичихээр нээнэ
    fodd = fopen("odd.txt", "wt");   // odd.txt файлыг сондгой тоо бичихээр нээнэ

    if (fin == NULL || feven == NULL || fodd == NULL) { // Аль нэг файл нээгдээгүй эсэхийг шалгана
        printf("File neeh aldaa!"); // Файл нээхэд алдаа гарсныг хэвлэнэ
        return 1; // Програмыг алдаатайгаар зогсооно
    }

    while (fscanf(fin, "%d", &d) == 1) { // input.txt файлаас нэг нэгээр нь бүхэл тоо уншина

        if (d % 2 == 0) // Тоог 2-т хуваахад үлдэгдэл 0 эсэхийг шалгана
            fprintf(feven, "%d ", d); // Тэгш тоог even.txt файлд бичнэ
        else // Дээрх нөхцөл биелээгүй бол
            fprintf(fodd, "%d ", d); // Сондгой тоог odd.txt файлд бичнэ

    }

    fclose(fin);  // input.txt файлыг хаана
    fclose(feven); // even.txt файлыг хаана
    fclose(fodd);  // odd.txt файлыг хаана

    system("pause"); // Windows орчинд програмын цонхыг түр зогсооно
    return 0; // Програм амжилттай дууссаныг илэрхийлнэ
}


