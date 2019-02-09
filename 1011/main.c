#include <stdio.h>

int main()
{   double pi = 3.14159, raio, volume;
    scanf("%lf", &raio);
    volume = (4.0/3) * pi * pow(raio,3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
