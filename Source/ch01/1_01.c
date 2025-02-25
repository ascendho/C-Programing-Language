/*【例1-1】求阶乘问题: 输入一个正整数n, 输出n! */

/* 编译预处理命令 */
#include <stdio.h>

/* 函数声明 */
int factorial(int n);

int main()                            /* 主函数 */
{
    int n;                            /* 变量定义 */

    /* 输入一个整数 */
    scanf("%d", &n);

    /* 调用函数计算阶乘 */
    printf("%d\n", factorial(n));

    return 0;
}

/* 定义计算 n! 的函数 */
int factorial(int n) {
    int i, fact;

    fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}