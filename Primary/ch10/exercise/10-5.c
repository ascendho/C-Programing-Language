#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;
    
    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int Ack(int m, int n) {
	// 递归基础情况
	// 当 m = 0 时，返回 n + 1
	if (m == 0) {
			return n + 1;
	}
	
	// 当 m > 0 且 n = 0 时，返回 Ack(m-1, 1)
	if (n == 0) {
			return Ack(m - 1, 1);
	}
	
	// 当 m > 0 且 n > 0 时，返回 Ack(m-1, Ack(m, n-1))
	return Ack(m - 1, Ack(m, n - 1));
}
