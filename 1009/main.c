#include <stdio.h>

int main()
{   char nome[10];
    double fixo, vendas, total;

    scanf("%s", &nome);
    fflush(stdin);
    scanf("%lf", &fixo);
    fflush(stdin);
    scanf("%lf", &vendas);
    fflush(stdin);

    total = fixo + (vendas * 15 /100);

    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
