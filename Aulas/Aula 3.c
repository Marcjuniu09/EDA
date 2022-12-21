typedef int Item;
#define less(A, B) (A < B)
#define exch(A, B) { Item t = A; A = B; B = t;}
#define cmpexch(A, B) { if (less(B, A)) exch(A, B); }

//estabilidade do algoritmo de ordenação é quando os elementos iguais permanecem na mesma ordem relativa

//faz o primeiro passo do insertsort

for(int i = r; i > l; i--) cmpexch(v[i-1], v[i]);

for(int i = l  + 2; i <= r; i++) {
    item mao = v[i];
    int j = i - 1;
    while (less(mao, v[j])) {
        v[j+1] = v[j];
        j--;
    }
    v[j+1] = mao;
}
//insertion sort no pior caso é O(n^2) e no melhor caso é O(n) (quando o vetor já está ordenado)

//merge sort não é sensível a ordem dos elementos, ele sempre vai ser o(nlogn) e é estável ,,,,,,,,,,,,,,,,,,,,,,,,,,,

