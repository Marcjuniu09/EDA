//Em um algoritmo de ordenação estável garante que os elementos com chaves iguais permanecem na mesma ordem que estavam no vetor original
void merge(item *v, int  l, int m, int r){
int ia = l, ib = m+1;
item *aux = malloc((r-l+1)*sizeof(item)); //alocando um vetor auxiliar para guardar os elementos ordenado. 
//por exemplo, se eu quero armazenar 5 espaços de memória, eu faço malloc(5*sizeof(int))
int iaux = 0;
while (ia <= m && ib <= r){
    if(less([vib], v[ia])){
        aux[iaux++] = v[ib++];
    }
    else{
        aux[iaux++] = v[ia++];
    }
}
while(ia <= m){
    aux[iaux++] = v[ia++];
while (ib <= r){
    aux[iaux++] = v[ib++];
}
for (int i = 0; i <= r - l + 1; i++){
    v[l++] = aux[i];
}
}

void mergesort(int *v, int l, int r){
    if(r - l == 0) return;
    int m = (r + l)/2;
    mergesort(v, l, m);
    mergesort(v, m + 1, r);
    merg(v, l, m, r);
}