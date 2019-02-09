#include <stdio.h>

int main()
{   int n, h;
    float v, salario;

    scanf("%d", &n);
    fflush(stdin);
    scanf("%d", &h);
    fflush(stdin);
    scanf("%f", &v);
    fflush(stdin);

    salario = h * v;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
