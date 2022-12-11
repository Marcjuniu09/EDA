#include <stdio.h>
#include <string.h>

int soma(char *n){
    int temp;
    if(*n == '\0'){
        return 0;
    }
    else{
        temp = *n - '0' + soma(n+1);
        return temp;
    }
}
int main(){
    char s[100];
    scanf("%s", s);
    printf("%d\n", soma(s));
    return 0;
}