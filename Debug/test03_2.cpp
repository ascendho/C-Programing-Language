#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c;
	double area, perimeter, s;

	printf("Enter 3 sides of the triangle: ");
	scanf( "%lf%lf%lf", &a, &b, &c );

	if( a + b > c || b + c > a || a + c > b) 
	    s = ( a + b + c ) / 2;
		area = sqrt( s * ( s - a ) * ( s - b ) * ( s - c );
		perimeter = a + b + c;
		printf("area = %.2f; perimeter = %.2f\n", area, perimeter);
	else
		printf("These sides do not correspond to a valid triangle\n");
		
    return 0;        
}

