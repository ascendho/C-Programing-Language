#include <stdio.h>
#include <math.h>

double fact(int n);

int main() {
    double x;
    scanf("%lf", &x);

    double sum = 1, term = 1;

    for (int i = 1; term >= 0.00001; i++) {
        term = pow(x, i) / fact(i);
        sum += term;
    }

    printf("%.4f", sum);

    return 0;
}

double fact(int n) {
    double ret = 1;

    for (int i = 1; i <= n; i++)
        ret *= i;

    return ret;
}