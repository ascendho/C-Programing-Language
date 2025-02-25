#include<stdio.h>

int main() {
    double i = 1, eps, sum = 0, re = 1;

    scanf("%le", &eps);

    while (re >= eps) {
        sum = sum + re;
        re = re * i / (2 * i + 1);
        i = i + 1;
    }

    sum = sum + re;

    printf("PI = %.5f", 2 * sum);

    return 0;
}