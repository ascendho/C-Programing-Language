#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 第N天桃子的个数
    int sum = 1;

    // 到i=1时即为第一天的桃子数目
    for (int i = N - 1; i >= 1; i--)
        sum = (sum + 1) * 2;

    printf("%d\n", sum);

    return 0;
} 