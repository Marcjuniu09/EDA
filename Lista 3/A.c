#include <stdio.h>
#include <string.h>

int f91(int n){ 
    if (n >= 101)
    {
        return n - 10;
    }
    else if (n <= 100)
    {
        return f91(f91(n+11));
    }
    return n;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n != 0){
        printf("f91(%d) = %d\n", n, f91(n));
        scanf("%d", &n);
    }
    return 0;
}