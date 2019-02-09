#include <stdio.h>

int main() {
    int N, R, V, i;
    while (scanf("%d %d", &N, &R) != EOF) {
        int voluntarios [N];
        for (i=0; i<=N; i++){
            voluntarios[i] = 0;
        }
        for (i=1; i<=R; i++) {
            scanf("%d", &V);
            voluntarios[V] = 1;
        }
        if (N == R) {
            printf("*");
        } else {
            for (i=1; i<=N; i++){
                if (voluntarios[i] == 0) {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
