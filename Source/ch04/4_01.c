/* 【例4-1】使用格里高利公式求π的近似值，要求精确到最后一项的绝对值小于给定精度eps */

/*  用格里高利公式计算π的近似值，精度要求：最后一项的绝对值小于给定精度eps  */
#include <stdio.h>

/* 程序中调用绝对值函数 fabs()，需包含 math.h */
#include <math.h>

int main() {
    int denominator, flag, i;

    /* pi 用于存放累加和 */
    double eps, item, pi;

    /* 提示输入精度eps */
    printf("Enter eps:");
    scanf("%lf", &eps);

    /* 循环初始化 */
    i = 1;                       /* i 表示当前的项数 */
    flag = 1;                    /* flag 表示第 i 项的符号，初始为正 */
    denominator = 1;             /* denominator表示第 i 项的分母，初始为1 */
    item = 1.0;                  /* item 中存放第 i 项的值，初值取第1项的值 */
    pi = 0;                      /* 置累加和 pi 的初值为0 */

    /* 当|item| ≥ eps时，执行循环 */
    while (fabs(item) >= eps) {
        pi = pi + item;                    /* 累加第 i 项的值 */
        i++;                               /* 项数增1，为下一次循环做准备 */
        flag = -flag;                      /* 改变符号，为下一次循环做准备 */
        denominator = denominator + 2;     /* 分母递增2 ，为下一次循环做准备 */
        item = flag * 1.0 / denominator;   /* 计算第i项的值，为下一次循环做准备 */
    }

    pi = pi + item;                  /* 加上最后一项的值 */
    pi = pi * 4;                     /* 循环计算的结果是 pi/4 */

    printf("pi = %.4f\n", pi);

    /* 此处i的值为最后一项的项数 */
    printf("i = %d\n", i);

    return 0;
}