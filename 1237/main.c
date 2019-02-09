#include <stdio.h>
#include <stdlib.h>

void suba(char s1[], char s2[], int tam1);

int main() {
    char frase1[51], frase2[51];
    int tam1, tam2;
    while(gets(frase1) && gets(frase2)) {
        tam1 = strlen(frase1);
        tam2 = strlen(frase2);

        if (tam1 >= tam2) {
            suba (frase1, frase2, tam1);
        } else {
            suba (frase2, frase1, tam2);
        }
    }
    return 0;
}

void suba(char s1[], char s2[], int tam1) {

    int i, j, big = 0, c, tam2, m, n;
    tam2 = strlen(s2);
    for (j=0; j<tam2; j++) {
        for(i=0; i<tam1; i++) {
            c=0;
            for(m=i, n=j; s2[n]==s1[m]; m++, n++){
                if (n==tam2 || m == tam1) {
                    break;
                } else {
                    c++;
                }
            }
            if(c>big) {
                big =c;
            }
        }
    }

    printf("%d\n", big);
}
