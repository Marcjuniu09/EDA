#include <stdio.h>
int main(){
    int n, j, z, i, diferenca, dt, teste = 0;
    scanf("%d", &n);
    while(1){
        teste++;
        if (n == 0){
            break;
            }
            diferenca = 0;
            dt = 0;
        printf("Teste %d \n", teste);
        for (i = 0; i < n; i++){          
            scanf("%d %d", &j, &z);
            diferenca = j - z;
            dt += diferenca;
            printf("%d\n", dt);
        }
        scanf("%d", &n);
    }
    return 0;
}

