/* 【例2-8】输入一个正整数n， 计算 1 - 1/3 + 1/5 - 1/7 + … 的前 n 项之和 */

#include <stdio.h>

int main() {
    int denominator, flag, i, n;
    double item, sum;

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);

    /* 执行循环前，给变量赋初值 */
    flag = 1;                    /* flag表示第i项的符号，初始为正 */
    denominator = 1;             /* denominator表示第i项的分母，初始为1 */
    item = 1;                    /* item表示第i项的值，初始为1 */
    sum = 0;                     /* 置累加和sum的初值为0 */

    /* 用for语句实现循环，循环执行n次 */
    for (i = 1; i <= n; i++) {
        sum = sum + item;                    /* 累加第i项的值 */
        flag = -flag;                        /* 改变符号，为下一次循环做准备 */
        denominator = denominator + 2;       /* 分母递增2 ，为下一次循环做准备 */
        item = flag * 1.0 / denominator;     /* 计算item的值，为下一次循环做准备*/
    }

    printf("sum = %f\n", sum);

    return 0;
}