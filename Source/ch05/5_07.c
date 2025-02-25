/*【例5-7】计算2个复数之和与之积。分别输入2个复数的实部与虚部，用函数实现计算2个复数之和与之积。
若2个复数分别为：c1 = x1 + (y1)i, c2 = x2 +(y2)i，则：
	c1 + c2 = (x1+x2) + (y1+y2)i
	c1 * c2 = (x1*x2 - y1*y2) + (x1*y2 + x2*y1)i
*/

/* 计算2个复数之和与之积 */

#include <stdio.h>

void complex_prod(double real1, double imag1, double real2, double imag2);

void complex_add(double real1, double imag1, double real2, double imag2);

/*  全局变量，用于存放函数结果 */
double result_real, result_imag;

int main() {
    /* 两个复数的实、虚部变量 */
    double imag1, imag2, real1, real2;

    printf("Enter 1st complex number(real and imaginary): ");
    scanf("%lf%lf", &real1, &imag1);            /* 输入第一个复数 */

    printf("Enter 2nd complex number(real and imaginary): ");
    scanf("%lf%lf", &real2, &imag2);            /* 输入第两个复数 */

    complex_add(real1, imag1, real2, imag2);           /* 求复数之和 */
    printf("addition of complex is %f+%fi\n", result_real, result_imag);

    complex_prod(real1, imag1, real2, imag2);          /* 求复数之积 */
    printf("product of complex is %f+%fi\n", result_real, result_imag);

    return 0;
}

/* 定义求复数之和函数 */
void complex_add(double real1, double imag1, double real2, double imag2) {
    result_real = real1 + real2;
    result_imag = imag1 + imag2;

    return;
}

/* 定义求复数之积函数 */
void complex_prod(double real1, double imag1, double real2, double imag2) {
    result_real = real1 * real2 - imag1 * imag2;
    result_imag = real1 * imag2 + real2 * imag1;

    return;
}