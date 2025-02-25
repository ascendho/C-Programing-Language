#include <stdio.h>
#include <math.h>

int main() {
    double salary;
    scanf("%lf", &salary);

    double rate;

    if (salary <= 1600)
        rate = 0;
    else if (salary <= 2500)
        rate = 0.05;
    else if (salary <= 3500)
        rate = 0.1;
    else if (salary <= 4500)
        rate = 0.15;
    else
        rate = 0.2;

    printf("%.2lf", fabs(rate * (salary - 1600)));

    return 0;
}