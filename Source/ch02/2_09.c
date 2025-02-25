/*【例2-9】从键盘输入一个正整数n，计算 n! */

#include <stdio.h>

int main() {
    int i, n;
    double product;                    /* 变量product中存放阶乘的值 */

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);
    product = 1;                       /* 置阶乘product的初值为1 */

    for (i = 1; i <= n; i++) {         /* 循环执行n次，计算n! */
        product = product * i;
    }

    /* %.0f指定输出时不要小数部分 */
    printf("product = %.0f\n", product);

    return 0;
}