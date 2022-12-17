#include <stdio.h>

float soma(float *v, int n){
    if(n == 0)
        return 0;
    else
        return v[n - 1] + soma(v, n - 1); // 
}

int main(){
    float v[5] = {1,2,3,4,5};
    printf("Soma: %.2f", soma(v, 5));
    return 0;
}