#include <stdio.h>

int main(void)
{
    double h, r_lower, r_upper, v;

	printf("Enter r_lower, r_upper, h: ");
    scanf("%lf%lf%lf", &r_lower, &r_upper, &h);
    v = volume_tc(r_lower, h, r_upper);
    printf("Volume = %.2f\n", v);

    return 0;
}
double volume_tc(double r_lower, r_upper, h)
{
    return 3.14159*h*( r_lower* r_lower+ r_upper* r_upper+ r_lower* r_upper)/3;
}

