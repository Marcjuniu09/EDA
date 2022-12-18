#include <stdio.h>

int inv(char *n){
    if(*n == '\0')
        return 0;
    else{
        inv(n+1);
        printf("%c", *n);
    }
}

int main(){
    char s[100];
    scanf("%s", s);
    inv(s);
    return 0;
}
