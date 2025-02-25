#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double fn(double x, int n) {
	// 递归基础情况
	if (n == 1) {
			return x;
	}
	
	// 递归计算
	// 对于 n > 1，使用递推公式
	// f(x,n) = f(x,n-1) + (-1)^(n-1) * x^n
	if (n % 2 == 0) {
			// 偶数项为负
			return fn(x, n-1) - pow(x, n);
	} else {
			// 奇数项为正
			return fn(x, n-1) + pow(x, n);
	}
}
