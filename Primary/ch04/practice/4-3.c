#include <stdio.h>
#include <math.h>

int main() {
    double eps;
    scanf("%lf", &eps);

    double sum = 0, term = 1;
    int sign = 1;

    int i = 1;

    do {
        term = sign * 1.0 / (3*i-2);
        sum += term;

        sign = -sign;
        i++;
    } while (fabs(term) > eps);

    printf("sum = %.6lf", sum);

    return 0;
}