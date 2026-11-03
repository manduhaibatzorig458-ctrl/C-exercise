#include <stdio.h>

int main(){
    int N;
    int i;
    int urjver = 1;

    printf("N toog oruulna uu: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i = i + 2) 
    {
       urjver = urjver * i;
    }
    printf("Urjver = %d\n", urjver);

    return 0;
 
}