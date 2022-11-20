#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int valor, soma = 0;
    scanf("%d %d ", &parcelas, &op);
    for (int i = 0; i < parcelas; i++){
        scanf("%d", &valor);
        if (op == '+'){
            soma = soma + valor;
        }
        else (op == '-');
            soma = soma - valor;
        }
    return soma;
    }

int main() {
    int n = faz_conta_direito(3, '+');

}
    