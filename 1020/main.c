#include <stdio.h>

int main() {
    int N, ano, mes, dia, resto;
    scanf("%d", &N);
    ano = N / 365;
    resto = N - ano * 365;
    mes = resto / 30;
    dia = resto - mes * 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
