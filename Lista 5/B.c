#include <stdio.h>
#include <string.h>

int substitui(char *str, int contador){
    if(str[contador] == '\0')
        return str;
    if(str[contador] == 'x')
        str[contador] = 'y';
        substitui(str, contador+1);

}

int main(void){
    char str[80];
    scanf("%s", str);
    printf("%s", substitui(str, 0));
}