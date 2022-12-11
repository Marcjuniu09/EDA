/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/

#include <stdio.h>

int main()
{
    float a[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Endereco de %d, %d: %d \n", i, j, &a[i][j]);
        }
    }
    return 0;
}
