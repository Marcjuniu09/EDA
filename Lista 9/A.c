#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int item;
#define less(A, B) (A < B)
#define exch(A, B) { item t = A; A = B; B = t; }


void selectionSort(item *v, int l, int r){
    int i, j;
    for(i = l; i < r; i++){
        for(j = r; j > i; j--){
            if(less(v[j], v[j-1]))
                exch(v[j], v[j-1]);
        }
    }
}

int main(){
    item *v = malloc(1000 * sizeof(item));
    int i = 0;
    while(scanf("%d", &v[i]) != EOF){
        i++;
    }
    selectionSort(v, 0, i-1);
    for(int j = 0; j < i; j++){
        printf("%d ", v[j]);
    }
    return 0;
}