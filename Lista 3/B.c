#include <stdio.h>
#include <string.h>

int mov(char *n){
    if(*n == '\0'){
        return 0;
    }
    if(*n == 'x'){
        mov(n+1);
        printf("%c", *n);
    }
    else if(*n != 'x'){
        printf("%c", *n);
        mov(n+1);
    }
}

int main(){
    char n[100];
    scanf("%s", n);
    mov(n);
    return 0;
}
