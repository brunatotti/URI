#include <stdio.h>

int main() {
    int N, horas, minutos, segundos, resto;
    scanf("%d", &N);
    horas = N / 3600;
    resto = N - horas * 3600;
    minutos = resto / 60;
    segundos = resto - minutos * 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
