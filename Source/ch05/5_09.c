/* 【补充】输入正整数n，输出1！~n！的值。要求定义并调用含静态变量的函数fact_s(n)计算n! */

#include <stdio.h>

double fact_s(int n);

int main() {
    int i, n;

    printf("Input n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        /* 输出i和i! */
        printf("%3d!=%.0f\n", i, fact_s(i));
    }

    return 0;
}

double fact_s(int n) {
    static double f = 1;          /* 定义静态变量，第一次赋值为0 */

    f = f * n;                    /* 在上一次调用时的值上乘n */

    return (f);
}