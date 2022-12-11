#include <stdio.h> 

void inv(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(void){
    int a = 3, b =7;

    inv(&a, &b);

    printf("valor de A = %d \n", a);
    printf("valor de B = %d \n", b);   
}