#include <stdio.h>

int main() {
    int i, j, k, flag = 0;
    int conector_um[5], conector_dois[5];

    for (i=0; i<5; i++) {
        scanf("%d", &conector_um[i]);
    }
    for (j=0; j<5; j++) {
        scanf("%d", &conector_dois[j]);
    }
    for (k=0; k<5; k++) {
        if (conector_um[k] != conector_dois[k]) {
            flag += 1;
        }
    }
    if (flag==5) {
        printf("Y\n");
    } else {
        printf("N\n");

    }
    return 0;
}
