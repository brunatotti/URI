#include <stdio.h>

int main() {
    int i, n, maior=0, posicao;

    for (i=1; i<=100; i++) {
        scanf("%d", &n);
        if (n > maior){
            maior = n;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);
    return 0;
}

