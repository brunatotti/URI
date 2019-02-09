#include <stdio.h>

int main()
{   int a, b, c, maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    maior = (a+b+abs(a-b)) / 2;
    maior = (maior+c+abs(maior-c)) / 2;
    printf("%d eh o maior\n", maior);
    return 0;
}
