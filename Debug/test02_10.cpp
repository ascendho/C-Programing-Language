#include<stdio.h>
double mypow(double x, int n)
int main( void )
{
    int n;
    double result, x;

    printf("Enter x,n: ");
    scanf("%lf%d", &x, &n);
    result = mypow(x,n);
    printf("result = %f\n",result);

    return 0;
}
int mypow(double x, int n);
{
    int i;
    double result;

    result = 1;
    for(i = 1; i <= n; i++){ 
        result = result * i;
    } 

    return result;
}
