#include <stdio.h>

int main() {
    float salario, aumento, novo;
    int percentual;
    scanf("%f", &salario);

    if (salario <= 400.00) {
        aumento = salario * 0.15;
        novo = salario + aumento;
        percentual = 15;
    } else if (salario > 400.00 && salario <= 800.00) {
        aumento = salario * 0.12;
        novo = salario + aumento;
        percentual = 12;
    }  else if (salario > 800.00 && salario <= 1200.00) {
        aumento = salario * 0.10;
        novo = salario + aumento;
        percentual = 10;
    }  else if (salario > 1200.00 && salario <= 2000.00) {
        aumento = salario * 0.07;
        novo = salario + aumento;
        percentual = 7;
    } else {
        aumento = salario * 0.04;
        novo = salario + aumento;
        percentual = 4;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novo, aumento, percentual);

    return 0;
}
