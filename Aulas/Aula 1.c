







void insertiosort(item *v, int l, int r){ //item é uma macro
//ordenando o primeiro elemento
    for(int i = r; i > l; i--){
        if(less(v[i], v[i-1])){
            exch(v[i], v[i-1]);
        }
    }
//ordenando o restante
for (int = l +2; i <= r; i++){
    item m = v[i]; int j = i;
    while(less(m, v[j-1])){
        v[j] = v[j-1];
        j--;
    }
    v[j] = m;
}
}

//Fazendo em macro
#define cmpexch(a, b){if (less(a, b)) exch(a, b)}




//fazendo uma função para ir procurando um valor no vetor de forma que a gente vai dividindo o vetor por 2

int bb(item *v, int l, int r, item b){
    int meio = (l+r)/2;
    if (eq(b, v[meio]))
        return meio;
    else if(less(b, v[meio]))
        return bb(v, l, meio-1, b);
    else if(less([meio], b))    
        return bb(v, meio+1, r, b);
}