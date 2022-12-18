#include <stdio.h>
#include <string.h>

int par(char *str, int contador, int tamanho){
    if(contador == tamanho-1)
        return 0;
    if(str[contador] == str[contador+2])
        return 1 + par(str, contador+1, tamanho); 
    return par(str, contador+1, tamanho);
}
//xaxsaxa
int main(){
    char str[100];
    scanf("%s", str);
    printf("%d", par(str, 0, strlen(str)));
    return 0;
}