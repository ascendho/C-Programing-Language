# include <stdio.h>

int main (void)
{
    int denominator, flag; 
    double eps, item, sum;

    flag = 1; 
    denominator = 1; 
    sum = 0;
	printf ("Enter eps: ");
    scanf("%lf", &eps);
	do{ 
     	item = flag / denominator; 
        sum = sum + item; 
        flag = -flag; 
        denominator = denominator + 3; 
	  }while (item < eps) ;
    printf ("sum = %.6f\n", sum);

    return 0;
}

