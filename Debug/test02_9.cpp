#include <stdio.h>
double fact (int n)
int main (void)
{
    int m, n;
    double p;

	printf("Enter m,n:\n");
    scanf ("%d%d", &m, &n);
  	p = fact(n)/fact(n-m);
    printf ("result = %.0f\n", p);

    return 0;
}

int fact (int n);
{
    int i;
    double product;

    product = 0;
    for (i = 1; i <= n; i++){
        product = product * i;
    }

    return product;
}
