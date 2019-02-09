#include <stdio.h>

int main() {
    int N;
    int i, j, k, p=0, q;
    int matriz[100][100];
    int vetor_N[100];

    while(N!=0) {
        scanf("%d", &N);
        vetor_N[p]=N;
        p+=1;
        int guarda_N, a, b=0, c=0;
        int valor=1;

        guarda_N=N;

        if (N%2==0) {
            a=N/2;
        } else {
            a=(N/2)+1;
        }
        matriz[j][k] = 0;
        for (i=1; i<=a; i++) {
            for (j=b; j<guarda_N; j++) {
                for (k=c; k<guarda_N; k++) {
                    matriz[j][k]=valor;
                }
            }
            valor++; b++; c++; guarda_N--;
        }
    }

    for(q=0; q<p; q++) {
        for (j=0; j<vetor_N[q]; j++) {
            for (k=0; k<vetor_N[q]; k++) {
                if (k==0) {
                    printf ("%3d", matriz[j][k]);
                } else {
                    printf (" %3d", matriz[j][k]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
