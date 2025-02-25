#include <stdio.h>

int main()
{
    int n;

	printf("Enter n: ");
    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int n )
{
	int digit, rev;
       
    rev = 0;
   	do{
		digit = n / 10;
   		n = n % 10;
        rev = rev * 10 + digit;
   	}while( n == 0 );

    return rev;
}
