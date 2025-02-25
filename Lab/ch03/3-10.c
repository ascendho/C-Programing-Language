#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);

    double payment;

    if (b == 90)
        payment = 6.95 * a;
    else if (b == 93)
        payment = 7.44 * a;
    else
        payment = 7.93 * a;

    if ('m' == c)
        payment *= 0.95;
    else
        payment *= 0.97;

    printf("%.2lf", payment);

    return 0;
}