#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    char x[4];
    int cont = 0, cont_1 = 0, cont_2 = 0;
    while (scanf("%s", &x) != EOF){
        cont++;
        if (strcmp(x, "sim") == 0){
                cont_1++;
}  
        if (cont == 10){
            if(cont_1 >= 2){
                cont_2++;
            }
            cont_1 = 0;
            cont = 0;
}    
}
printf("%d\n ", cont_2);
}
