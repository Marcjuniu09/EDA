#include <stdio.h>

int main() {
    int a, b, c, tot, soma;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &tot);
    soma = a + b + c;
    if (soma == tot){
        printf("Acertou\n");
    } 
    else{
        printf("Errou\n");
    }
    return 0;
}
