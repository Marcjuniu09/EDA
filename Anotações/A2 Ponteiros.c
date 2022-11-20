#include <stdio.h>

int main (void){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;


    double soma;
    soma = *pX + *pY;

    int *resultado;
    resultado = &x;

    

    printf("valor x = %i\n", resultado);      

    printf("Somando x + y = %f\n", soma);




    getchar();
    return 0;

}
