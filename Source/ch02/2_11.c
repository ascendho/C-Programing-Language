/*【例2-11】输入一个正整数n（n <= 16），生成一张阶乘表，
 * 输出0！到n！的值。要求定义和调用函数fact(n)计算n!，函数类型是double */

/* 定义和调用求阶乘函数生成阶乘表 */
#include <stdio.h>

double fact(int n);                   /* 自定义函数的声明（简称函数声明）*/

int main() {
    int i, n;
    double result;

    /* 输入提示 */
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        /* 调用自定义函数fact(i)计算i! */
        result = fact(i);
        printf("%d!=%.0f\n", i, result);
    }

    return 0;
}

/* 定义求 n! 的函数 */
double fact(int n)                /* 函数首部 */
{
    int i;
    double product;               /* 变量product用于存放结果（阶乘的值） */

    /* 计算 n! */
    product = 1;                  /* 置阶乘product的初值为1 */
    for (i = 1; i <= n; i++) {    /* 循环n次，计算 n! */
        product = product * i;
    }

    return product;               /* 将结果回送主函数 */
}