#include <stdio.h>

int main(){
    int M,n;
    int result = 1;

    printf("M toog oruulna uu: ");
    scanf("%d", &M);

    printf("n zereg oruulna uu: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result = result * M;
    }

    printf("%d^%d = %d\n", M, n, result);

    return 0;
}
