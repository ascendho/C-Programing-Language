/*【例11-9】编写一个函数calc(f, a, b)，用梯形公式求函数f(x)在[a, b]上的数值积分。*/

/* 计算数值积分（函数指针作为函数参数示例） */
#include <stdio.h>
#include <math.h>

double calc(double (*funp)(double), double a, double b);  /*函数原型说明 */
double f1(double x), f2(double x);

int main() {
    double result;
    double (*funp)(double);

    result = calc(f1, 0.0, 1.0);        /* 函数名f1作为函数calc的实参 */

    printf("1: resule=%.4f\n", result);

    funp = f2;                                      /* 对函数指针funp赋值 */
    result = calc(funp, 1.0, 2.0);            /* 函数指针funp作为函数calc的实参 */

    printf("2: resule=%.4f\n", result);

    return 0;
}

/* 函数指针funp作为函数的形参 */
double calc(double (*funp)(double), double a, double b) {
    double z;

    z = (b - a) / 2 * ((*funp)(a) + (*funp)(b));   /* 调用funp指向的函数 */

    return (z);
}

double f1(double x) {
    return (x * x);
}

double f2(double x) {
    return (sin(x) / x);
}