#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char x[30];
    int cont = 0;
    while (1){
        if (scanf("%s", x) == EOF)
            break;
        if (strcmp(x, "marte") == 0){
            printf("Leonardo Cicero Marciano\n");
            cont++;
        }
    }
    if (cont < 1){
        printf("none\n");
    }
    return 0;
}

