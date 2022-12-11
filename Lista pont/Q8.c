/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. */

#include <stdio.h>

int main()
{
    float a[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Endereco de %d: %d \n", i, &a[i]);
    }
    return 0;
}