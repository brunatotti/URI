#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta, x1, x2;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B,2) - 4*A*C;

    if (delta<0 || A == 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = sqrt(delta);

        x1 = - B + delta;
        x1 /= (2*A);

        x2 = -B - delta;
        x2 /= (2*A);

        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    return 0;
}
