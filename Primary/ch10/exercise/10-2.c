#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

/* 你的代码将被嵌在这里 */
double fact(int n) {
	// 递归计算阶乘
	if (n == 0 || n == 1) {
			return 1;
	}
	return n * fact(n - 1);
}

double factsum(int n) {
	double sum = 0;
	// 循环计算 1! + 2! + 3! + ... + n!
	for (int i = 1; i <= n; i++) {
			sum += fact(i);
	}
	return sum;
}
