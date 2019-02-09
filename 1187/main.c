#include <stdio.h>

int main() {
    double matriz[12][12], soma = 0.0, valor = 0.0;
    int coluna, linha;
    char op;

    scanf("%c", &op);

    for(linha=0; linha<=11; linha++){
        for(coluna=0; coluna<=11; coluna++){
            scanf("%lf", &valor);
            matriz[linha][coluna] = valor;
        }
    }

    for(linha=0; linha<=4; linha++){
        for(coluna=linha+1; coluna<=10-linha; coluna++){
            soma += matriz[linha][coluna];
        }
    }

    if (op == 'M') {
        soma /= 30;
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma);
    }
    return 0;
}
