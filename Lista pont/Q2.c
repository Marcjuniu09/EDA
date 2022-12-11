/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o. Use ponteiro*/
 
#include <stdio.h>

int main()
{
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Digite um numero inteiro: ");
    scanf("%d", p1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", p2);
    if (p1 > p2)
    {
        printf("O maior endereco e: %d /n", a);
    }
    else
    {
        printf("O maior endereco e: %d /n", b);
    }
    return 0;
}

