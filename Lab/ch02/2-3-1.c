#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);

    double ans;
    if (0 == x)
        ans = 0;
    else
        ans = 1 / x;

    printf("f(%.1lf) = %.1lf", x, ans);

    return 0;
}