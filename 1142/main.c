#include <stdio.h>

int main() {
    int n, a, b, c, x;
    scanf("%d",&n);

    for (a=1, b=2, c=3, x=1; x<=n; x++) {
        printf("%d %d %d PUM\n", a, b, c);
        a += 4;
        b += 4;
        c += 4;
    }
    return 0;
}
