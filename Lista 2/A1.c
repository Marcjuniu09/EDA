#include <stdio.h>

int main() {
    int quant, a, b = 0, c, tot, soma;
    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%d", &a);
        b = a + b;
    }
    scanf("%d", &tot);
    if (b == tot){
        printf("Acertou\n");
    } 
    else{
        printf("Errou\n");
    }
    return 0;
}
