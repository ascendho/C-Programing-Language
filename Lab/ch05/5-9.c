#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main() {
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x) {
    int flag = 1, i = 0;
    double item = 1, sum = 0, tmp = 1, power = 1;

    while (fabs(item) >= e) {
        item = flag * power / tmp;
        sum = sum + item;
        power = power * x * x;
        tmp = tmp * (i + 1) * (i + 2);
        flag = -flag;
        i = i + 2;
    }

    return sum;
}