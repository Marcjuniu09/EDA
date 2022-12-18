#include <stdio.h>

int soma(int n, int cont, int a){
    if(cont > n)
        return a;
    else{
        a += cont;
        cont++;
        soma(n, cont, a);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", soma(n, 0, 0));

}
