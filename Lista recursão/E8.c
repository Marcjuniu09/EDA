#include <stdio.h>

int fat(int n, int cont){
    if(n == 0)
        return cont;
    else{
        cont *= n;
        n--;
        fat(n, cont);

    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("O fatorial eh: %d \n", fat(n, 1));
}
