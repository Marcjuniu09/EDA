#include <stdio.h>
#include <stdlib.h>

int main (){
    int N, cont= 0, x, soma = 0, cont_alice = 0, cont_beto = 0;
    while (1){
        scanf("%d", &N);
        if ( N == 0) break;

        for ( cont = 0; cont < N; cont++){
            scanf("%d", &x);
            if (x == 0) cont_alice++;

            else cont_beto++;
        }
        printf("Alice ganhou %d e Beto ganhou %d\n", cont_alice, cont_beto );
        cont_alice = 0;
        cont_beto = 0;
    }
    return 0;
}