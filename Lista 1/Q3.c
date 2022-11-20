#include <stdio.h>
#include <stdlib.h>

int main (){
    int N, cont= 0, X = 0, soma = 0;
    scanf("%d", &N);
    while (cont < N){
        scanf("%d", &X);
        soma = soma + X;
        cont++;
    }
    printf("%d\n", soma);
    return 0;
}