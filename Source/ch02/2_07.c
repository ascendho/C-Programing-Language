/* 【例2-7】求  1 + 2 + 3 + …… + n */

#include <stdio.h>

int main() {
    int i, n, sum;

    printf("Enter n:");                    /* 输入提示 */
    scanf("%d", &n);                       /* 调用scanf()函数输入n */

    sum = 0;                              /* 置累加和sum的初值为0 */
    for (i = 1; i <= n; i++) {            /* 循环执行n次 */
        sum = sum + i;                    /* 反复累加i的值 */
    }

    /* 输出累加和 */
    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}