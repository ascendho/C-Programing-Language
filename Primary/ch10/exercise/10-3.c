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
double calc_pow(double x, int n) {
	// 递归基础情况
	if (n == 0) {
			return 1;
	}
	
	// 当 n 为 1 时直接返回 x
	if (n == 1) {
			return x;
	}
	
	// 递归计算
	// 如果 n 是偶数，使用分治思想：x^n = (x^(n/2))^2
	if (n % 2 == 0) {
			double half = calc_pow(x, n / 2);
			return half * half;
	}
	
	// 如果 n 是奇数，拆分为 x * x^(n-1)
	return x * calc_pow(x, n - 1);
}
