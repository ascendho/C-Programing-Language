/*【例2-10】输入一个正整数n，生成一张2的乘方表 */

/* 调用幂函数pow()生成乘方表 */
#include <stdio.h>

/* 程序中调用了数学库函数，需包含头文件math.h */
#include <math.h>

int main() {
    int i, n;
    double power;

    /* 输入提示 */
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        /* 调用幂函数pow(2,i)计算2的i次方 */
        power = pow(2, i);
        printf("pow(2,%d)= %.0f\n", i, power);
    }

    return 0;
}