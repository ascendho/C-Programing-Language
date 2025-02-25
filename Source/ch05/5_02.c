/*【例5-2】 计算五边形的面积。将一个五边形分割成三个三角形（图5.1），输入这些三角形的7条边长，计算该五边形的面积。
 * 要求定义和调用函数area(x,y,z)计算边长为x、y、z的三角形面积 */

/* 计算五边形的面积 */
# include <stdio.h>
# include <math.h>

/* 函数声明 */
double area(double x, double y, double z);

int main() {
    double a1, a2, a3, a4, a5, a6, a7, s;

    printf("Please input 7 side lengths in the order a1 to a7:\n");
    scanf("%lf%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &a4, &a5, &a6, &a7);

    /* 调用三次area函数 */
    s = area(a1, a5, a6) + area(a4, a6, a7) + area(a2, a3, a7);
    printf("The area of the Pentagon is %.2f\n", s);

    return 0;
}

/* 使用海伦-秦九韶公式计算三角形面积的函数 */
double area(double x, double y, double z) {
    // 半周长
    double p = (x + y + z) / 2;

    return sqrt(p * (p - x) * (p - y) * (p - z));
}