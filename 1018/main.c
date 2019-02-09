#include <stdio.h>

int main()
{   int N, resto, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    scanf("%d", &N);

    if (N >= 100)
        cem = N / 100;
        resto = N - (cem * 100);
    if (resto < 100 && resto >= 50)
        cinquenta = resto / 50;
        resto = resto - (cinquenta * 50);
    if (resto < 50 && resto >= 20)
        vinte = resto / 20;
        resto = resto - (vinte * 20);
    if (resto < 20 && resto >= 10)
        dez = resto / 10;
        resto = resto - (dez * 10);
    if (resto <10 && resto >= 5)
        cinco = resto / 5;
        resto =  resto - (cinco * 5);
    if (resto < 5 && resto >= 2)
        dois = resto / 2;
        resto = resto - (dois * 2);
    if (resto < 2 && resto >= 1)
        um = resto / 1;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}
