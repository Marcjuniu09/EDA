#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int item;
#define less(A, B) (A < B)
#define exch(A, B) { item t = A; A = B; B = t; }

void selectionSort(item *v, int l, int r){
    int i, j, min;
    for(i = l; i < r; i++){
        min = i;
        for(j = i + 1; j <= r; j++){
            if(less(v[j], v[min]))
                min = j;
        }
        exch(v[i], v[min]);
    }
} 

int main(void){
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

