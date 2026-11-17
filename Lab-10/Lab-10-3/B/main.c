#include <stdio.h>                  // printf, gets ашиглах сан
#include <string.h>                 // strlen функц ашиглах сан
#define MAX_SIZE 100                // мөрийн дээд хэмжээ

int main()
{
    char str[100], reverse[100];    // str: анхны мөр, reverse: үгсийг урвуу дарааллаар хадгалах мөр
    int len, i, index, wordStart, wordEnd;
    // len: мөрийн урт, i: хуулах индекс, index: reverse доторх байрлал
    // wordStart, wordEnd: үгийн эхлэл ба төгсгөлийн индекс

    printf("Enter any string: ");    // мөр оруулахыг хүснэ
    gets(str);                      // мөрийг гараас уншина

    len = strlen(str);              // мөрийн уртыг олно
    index = 0;                      // reverse мөрийн эхний байрлалаас эхэлнэ

    // Мөрийн сүүлийн тэмдэгтээс хайлтаа эхлүүлнэ
    wordStart = len - 1;
    wordEnd   = len - 1;

    // Мөрийг төгсгөлөөс эхлэн эхлэл рүү нь шалгана
    while (wordStart > 0)
    {
        // Одоогийн тэмдэгт хоосон зай бол үгийн хил олдсон гэсэн үг
        if (str[wordStart] == ' ')
        {
            // Зайны дараах үгийг (wordStart+1 -ээс wordEnd хүртэл) reverse рүү хуулна
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                reverse[index] = str[i];    // үгийн тэмдэгтийг хуулна
                i++;                        // дараагийн тэмдэгт рүү
                index++;                    // reverse доторх байрлал ахина
            }
            reverse[index++] = ' ';         // үгийн ард хоосон зай нэмнэ

            wordEnd = wordStart - 1;        // дараагийн үгийн төгсгөлийг тогтооно
        }

        wordStart--;                // нэг тэмдэгт зүүн тийш шилжинэ
    }

    // Мөрийн эхний үгийг (0-ээс wordEnd хүртэл) хамгийн сүүлд хуулна
    for (i = 0; i <= wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Мөрийн төгсгөлийн тэмдэгт '\0' тавьж мөрийг хаана
    reverse[index] = '\0';

    printf("Original string \n%s\n\n", str);       // анхны мөрийг хэвлэнэ
    printf("Reverse ordered words \n%s", reverse); // үгсийг урвуу дарааллаар хэвлэнэ

    return 0;                       // програм амжилттай дууслаа
}