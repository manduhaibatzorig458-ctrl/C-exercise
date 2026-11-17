#include <stdio.h>                 // printf, scanf ашиглах сан

#define ROW 3                      // мөрийн тоо
#define COL 3                      // баганын тоо

void matrixInput(int mat[][COL]);                                      // матриц уншина
void matrixPrint(int mat[][COL]);                                      // матриц хэвлэнэ
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]); // матриц үржүүлнэ

int main()
{
    int mat1[ROW][COL];            // 1-р матриц
    int mat2[ROW][COL];            // 2-р матриц
    int product[ROW][COL];         // үржвэр хадгалах матриц

    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);   // 1-р матрицын хэмжээг хэлж урамшуулна
    matrixInput(mat1);             // 1-р матрицыг уншина

    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);  // 2-р матрицын хэмжээг хэлнэ
    matrixInput(mat2);             // 2-р матрицыг уншина

    matrixMultiply(mat1, mat2, product);   // mat1 * mat2 -ийг product-д бичнэ

    printf("Product of both matrices is : \n");   // гарчиг хэвлэнэ
    matrixPrint(product);          // үржвэрийг хэвлэнэ
    return 0;                      // програм амжилттай дууслаа
}

void matrixInput(int mat[][COL])
{
    int row, col;                  // давталтын тоолуур
    for (row = 0; row < ROW; row++)            // мөр бүрээр
    {
        for (col = 0; col < COL; col++)        // багана бүрээр
        {
            scanf("%d", (*(mat + row) + col)); // &mat[row][col] -тэй адил: элементийн хаяг руу уншина
        }
    }
}

void matrixPrint(int mat[][COL])
{
    int row, col;                  // давталтын тоолуур
    for (row = 0; row < ROW; row++)            // мөр бүрээр
    {
        for (col = 0; col < COL; col++)        // багана бүрээр
        {
            printf("%d ", *(*(mat + row) + col));  // mat[row][col] утгыг хэвлэнэ
        }
        printf("\n");              // мөр дуусахад шинэ мөр рүү орно
    }
}

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row, col, i;               // row, col: үр дүнгийн байрлал; i: нийлбэрийн индекс
    int sum;                       // нэг элементийн нийлбэр

    for (row = 0; row < ROW; row++)            // үр дүнгийн мөр бүр
    {
        for (col = 0; col < COL; col++)        // үр дүнгийн багана бүр
        {
            sum = 0;               // нийлбэрийг тэглэнэ
            for (i = 0; i < COL; i++)          // mat1-ийн мөр × mat2-ын багана
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col)); // mat1[row][i] * mat2[i][col]
            }
            *(*(res + row) + col) = sum;       // res[row][col] = sum
        }
    }
}