#include <stdio.h>

int main() {
    float a, b, c, d, e, tri, tra;
    scanf("%f %f %f", &a, &b, &c);
    d = b - c;

    if (d < 0) {
        d = d * (- 1);
    }
    e = b + c;
    if (d < a && a < e) {
        tri = (a+b+c) / 2;
        printf("Perimetro = %.1f\n", tri);
    } else {
        tra = 0.5 * (a+b) * c;
        printf("Area = %.1f\n", tra);
    }
    return 0;
}
