#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow( double x, int n ){
    if(1==n)
        return x;
    else
        return x*calc_pow(x,n-1);
    
}