typedef int item;
#define less(A, B) (A < B)
#define exch(A, B) { item t = A; A = B; B = t; }

int numeros[7] = {1, 2, 3, 4, 5, 6, 7};
//v1 = [1, 3, 5, 7, 9, 11]
//v2 = [2,4, 6, 8, 10, 12]
// receba dois vetores ordenados e retorne um terceiro vetor ordenado
item* mergep(item *v1, int l1, int r1, item *v2, int l2, int r2){
    item *v3 = malloc(sizeof(item) * (r1 - l1 + r2 - l2 + 2));
    int v1i = l1, v2i = l2, v3i = 0;
    while(v1i <= r1 && v2i <= r2){
        if(less(v2[v2i], v1[v1i])){
            v3[v3i++] = v1[v1i++];
        }
        else{
            v3[v3i++] = v1[v1i++];
        }
    }
    while(v1i <= r1){
        v3[v3i] = v1[v1i];
        v1i++;
        v3i++;
    }
    while(v2i <= r2){
        v3[v3i] = v2[v2i];
        v2i++;
        v3i++;
    }
    return v3;
}



printf("%c", "ola mundo"[1<<2]);
[1<<2] = 4 //isso é um bitshift, 1 << 2 = 4. ou seja, 0001 << 2 = 0100 = 4. Deslocamento de bits para a esquerda.
//é o mesmo se eu quiser dividir só que vai ser com >>, 4 >> 2 = 0001 = 1. Deslocamento de bits para a direita.