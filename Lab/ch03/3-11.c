#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
        printf("Zero Equation");
    else if (a == 0 && b == 0 && c != 0)
        printf("Not An Equation");

    double delta = b * b - 4 * a * c;

    if (a != 0) {
        if (delta > 0) {
            printf("%.2lf\n", (-b + sqrt(delta)) / (2 * a));
            printf("%.2lf", (-b - sqrt(delta)) / (2 * a));
        } else if (delta == 0)
            printf("%.2lf", -b / (2 * a));
        else if (delta < 0) {
            if (b != 0) {
                printf("%.2lf+%.2lfi\n", -b / (2 * a), sqrt(-delta) / (2 * a));
                printf("%.2lf-%.2lfi", -b / (2 * a), sqrt(-delta) / (2 * a));
            } else {
                printf("0.00+%.2lfi\n", sqrt(-delta) / (2 * a));
                printf("0.00-%.2lfi", sqrt(-delta) / (2 * a));
            }
        }
    } else if (b != 0)
        printf("%.2lf", -c / b);

    return 0;
}