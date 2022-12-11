#include <stdio.h>
#include <string.h>

long int fibonacci(int n){
    if(0<n<3){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);

    }
}
int main(){
    int s;
    scanf("%s", &s);
    printf("%d\n", fibonacci(s));
    return 0;
}