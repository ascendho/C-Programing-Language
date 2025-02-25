#include <stdio.h>

#define PI 3.14159

double volume_tc(double r_lower, double r_upper, double h);

int main(void) {
    double h, r_lower, r_upper, v;

    scanf("%lf%lf%lf", &r_lower, &r_upper, &h);
    v = volume_tc(r_lower, r_upper, h);
    printf("%.2f\n", v);

    return 0;
}

/* 请在这里填写答案 */
double volume_tc(double r_lower, double r_upper, double h) {
    return PI * h * (r_lower * r_lower + r_upper * r_upper + r_lower * r_upper) / 3;
}