/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros 
(use &). Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a modificacao.*/

#include <stdio.h> 
int main() 
{
    int a, *p1;
    float b, *p2;
    char c, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("Digite um numero inteiro: ");
    scanf("%d", p1);
    printf("Digite um numero real: ");
    scanf("%f", p2);
    printf("Digite um caractere: ");
    scanf(" %c", p3);
    printf("Antes da modificacao: a = %d b = %.2f c = %c", a, b, c);
    *p1 = 10;
    *p2 = 10.5;
    *p3 = 'a';
    printf("Depois da modificacao: a = %d b = %.2f c = %c", a, b, c);
    return 0;
}