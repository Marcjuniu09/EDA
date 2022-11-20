#include <stdio.h>

int main(void)
{
    int a, cont=0;
    while (scanf("%d", &a) != EOF)
    {
        cont += 1;
    }
    printf("%d\n", cont);
}
