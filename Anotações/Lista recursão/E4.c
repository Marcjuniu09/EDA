#include <stdio.h>

float inv(int v[], int l, int r){
    int temp;
    if(l >= r)
        return;
    else
        temp = v[l];
        v[l] = v[r];
        v[r] = temp;
        inv(v, l + 1, r - 1);
        // [1,2,3,4,5] -> [5,4,3,2,1]
        
}

int main(){
    int v[5] = {1,2,3,4,5};
    printf("Inverso: %d \n", inv(v, 0, 4));
    

    return 0;
}