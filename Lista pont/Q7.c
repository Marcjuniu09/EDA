#include <stdio.h>

void inverte(int *x, int *y){
    int temp;
        temp = *x + *y;
        *x = temp;
    
}

int main(){
    int a = 7, b =1;

    inverte(&a, &b);

    printf("valor de A = %d \n", a);
    printf("valor de B = %d \n", b);   

}