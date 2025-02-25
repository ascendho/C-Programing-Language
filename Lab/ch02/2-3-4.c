#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    double ans;
    if (x >= 0)
        ans = pow(x, 0.5);
    else
        ans = pow(x + 1, 2) + 2 * x + 1 / x;

    printf("f(%.2lf) = %.2lf", x, ans);

    return 0;
}