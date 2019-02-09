#include <stdio.h>

int main()
{   double N, resto;
    int cem, cinquenta, vinte, dez, cinco, dois, um, mcinquenta, vcinco, mdez, mcinco, cum;

    scanf("%lf", &N);
    N = N*100;

    cem = N / 10000;
    resto = N - (cem * 10000);
    cinquenta = resto / 5000;
    resto -= cinquenta * 5000;
    vinte = resto / 2000;
    resto -= vinte * 2000;
    dez = resto / 1000;
    resto -= dez * 1000;
    cinco = resto / 500;
    resto -= cinco * 500;
    dois = resto / 200;
    resto -= dois * 200;

    um = resto / 100;
    resto -= um * 100;
    mcinquenta = resto / 50;
    resto -= mcinquenta * 50;
    vcinco = resto / 25;
    resto -= vcinco * 25;
    mdez = resto / 10;
    resto -= mdez * 10;
    mcinco = resto / 5;
    resto -= mcinco * 5;
    cum = resto / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n", cem, cinquenta);
    printf("%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n", vinte, dez);
    printf("%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", cinco, dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n", um, mcinquenta);
    printf("%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n", vcinco, mdez);
    printf("%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", mcinco, cum);

    return 0;
}
