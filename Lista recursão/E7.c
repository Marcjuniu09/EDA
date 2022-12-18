/*Crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão.

Observação: se o usuário inserir o número 250, a saída esperada deve ser : o número digitado tem 3 dígitos.*/

#include <stdio.h>

int contaDigitos(int n, int cont){
    if(n == 0)
        return cont;
    else{
        n /= 10;
        cont++;
        contaDigitos(n, cont);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("O numero digitado tem %d digitos.\n", contaDigitos(n, 0));
}
