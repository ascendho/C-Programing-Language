#include <stdio.h>

int f( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int f(int n) {
	// 处理基础情况
	if (n == 0) return 0;
	if (n == 1) return 1;
	
	// 迭代计算
	int a = 0, b = 1, result = 0;
	for (int i = 2; i <= n; i++) {
			result = a + b;
			a = b;
			b = result;
	}
	
	return result;
}
