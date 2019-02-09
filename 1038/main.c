#include <stdio.h>

int main() {
    int cod, quant;
    float total;
    scanf("%d %d", &cod, &quant);

    if (cod == 1) {
        total = 4.00 * quant;
        printf("Total: R$ %.2f\n", total);
    } else {
        if (cod == 2) {
            total = 4.50 * quant;
            printf("Total: R$ %.2f\n", total);
        } else if (cod == 3){
            total = 5.00 * quant;
            printf("Total: R$ %.2f\n", total);
        } else if (cod == 4){
            total = 2.00 * quant;
            printf("Total: R$ %.2f\n", total);
        } else {
            total = 1.50 * quant;
            printf("Total: R$ %.2f\n", total);
        }
    }

    return 0;
}
