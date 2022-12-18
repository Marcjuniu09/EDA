/*Um problema típico em ciência da computação consiste
em converter um número da sua forma decimal para a
forma binária. escreva uma função recursiva que receba um número 
inteiro positivo e retorne uma string contendo a sua representação 
binária.*/

#include <stdio.h>
#include <string.h>

int bin(int n){
    if(n == 0){
        return 0;
    }
    else{
        bin(n/2);
        printf("%d", n%2);
    }
}


