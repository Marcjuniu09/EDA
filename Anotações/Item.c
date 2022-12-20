typedef int Item;
#define less(A, B) (A < B)
#define exch(A, B) { Item t = A; A = B; B = t; }

int numeros[7] = {10, 8, 1, 2, 9, 5, 2};

void selectionSort(Item *v, int l, int r){
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

int main(){
    selectionSort(numeros, 0, 6);
    for(int i = 0; i < 7; i++){
        printf("%d ", numeros[i]);
    }
    return 0;
}

