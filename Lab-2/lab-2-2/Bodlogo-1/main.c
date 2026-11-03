#include <stdio.h>
  int main(){
    float a, b, c;
    float p, S;
        printf("Gurvaljnii 3 taliig oruulna uu: ");
        scanf("%f %f %f", &a, &b, &c);

         p = (a + b + c) / 2;
         S = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Gurvaljnii talbai = %.2f\n", S);
        
        printf("\n2 katetaa oruulna uu: ");
        scanf("%f %f", &a, &b);

        c = sqrt(a * a + b * b);
        printf("Gipotenuz = %.2f\n", c);

    return 0;
  }