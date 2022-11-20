#include <stdio.h>

int main (void){
    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    printf("Endereço de x: %p\n " , &x);
    printf("Valor de x: %d" , *ponteiro);

    printf("%d\n", x);

    getchar();
    
    return 0;

}


//Exemplo de ponteiro

int main(void){
    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x; //ponteiro recebe o endereço de x

    int y = 20; //y recebe 20
    *ponteiro = y; //ponteiro recebe o valor de y

    printf("%i %i", x, y); //imprime 20 20

    getchar();
    
    return 0;

}

