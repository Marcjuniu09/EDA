#include <stdio.h>

int main()
{
   int c[5], i;
   int *p;
   p = c;
    for(i=0; i<5; i++){
         printf("Digite o valor de c[%d]: ", i);
         scanf("%d", &c[i]);
    }
    for(i = 0; i < 5; i++){
     if (*p % 2 == 0){
        printf("O endereco de %d e: %d \n", *p, p);
     }
     p++;
    }
    return 0;
}