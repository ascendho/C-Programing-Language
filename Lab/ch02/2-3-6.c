#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);

    if (10 == x)
        printf("f(%.1lf) = %.1lf", x, 1 / x);
    else
        printf("f(%.1lf) = %.1lf", x, x);

    return 0;
}