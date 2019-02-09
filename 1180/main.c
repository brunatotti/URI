#include <stdio.h>

int main() {
    int n, i, menor=0, posicao=0;

    scanf("%d", &n);
    int X[n];
    for (i=0; i<n; i++) {
        scanf("%d", &X[i]);
    }
    if (X[0]<X[1]) {
        menor = X[0];
        posicao = 0;
    }
    for (i=0; i<n; i++) {
        if (menor>X[i]) {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}

