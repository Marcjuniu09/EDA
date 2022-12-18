#include <stdio.h>
#include <string.h>

int substitui(char *str, int contador, int tamanho){
    if(contador == strlen(str))
        return 0;

    else{
        substitui(str, contador++, tamanho--);
        printf('%c', str[tamanho]);
    }     
}

int main(void){
    char str[80];
    scanf("%s", str);
    printf("%s", substitui(str, 0, strlen(str)));
}