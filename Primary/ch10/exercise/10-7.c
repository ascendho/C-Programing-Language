#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin(int n) {
	// 特殊情况处理
	if (n == 0) {
			printf("0");
			return;
	}
	
	// 存储二进制位的数组
	int binary[32];  // 假设32位整数
	int i = 0;
	
	// 转换为二进制
	while (n > 0) {
			binary[i] = n % 2;
			n /= 2;
			i++;
	}
	
	// 逆序输出
	for (int j = i - 1; j >= 0; j--) {
			printf("%d", binary[j]);
	}
}
