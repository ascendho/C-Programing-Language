#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void printdigits(int n) {
	// 处理负数情况
	if (n < 0) {
			n = -n;
	}
	
	// 递归基础情况
	if (n < 10) {
			// 个位数直接输出
			printf("%d\n", n);
			return;
	}
	
	// 递归处理高位
	printdigits(n / 10);
	
	// 输出当前位
	printf("%d\n", n % 10);
}
