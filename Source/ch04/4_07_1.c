/*【例4-7-1】使用函数求阶乘和。计算1! + 2! + 3! + … + n!。
 * 要求定义和调用函数fact(n)计算n的阶乘，如果n是非负整数，则该函数返回n的阶乘，否则返回0 */

/* 使用函数计算 1! + 2! + 3! + … + n! */
# include <stdio.h>

/* 函数声明 */
double fact(int n);

int main() {
    int i, n;
    double sum;

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++) {
        /* 调用fact(i)求i!，共重复n次 */
        sum = sum + fact(i);
    }

    printf("1! + 2! + ... + %d! = %.0f\n", n, sum);

    return 0;
}

/* 定义求 n! 的函数 */
double fact(int n) {
    int i;
    double result;              /* 变量 result 中存放阶乘的值 */

    if (n < 0) {                /* 如果n为负整数，阶乘为0 */
        return 0;
    }

    result = 1;                    /* 置阶乘 result 的初值为1 */

    for (i = 1; i <= n; i++) {     /* 循环执行n次，计算n! */
        result = result * i;
    }

    return result;                 /* 把结果回送主函数 */
}