/*【例8-6】输入n个整数作为数组元素，分别使用数组和指针来计算并输出它们的和。*/
/* 分别使用数组和指针计算数组元素之和 */

#include <stdio.h>

int main() {
    /* 定义数组和指针变量 */
    int i, n, a[10], *p;
    long sum = 0;

    printf("Enter n(n≤10): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* 使用数组求和 */
    for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }

    printf("calculated by array, sum = %ld \n", sum);

    sum = 0;                         /* 重新初始化sum为0 */
    for (p = a; p < a + n; p++) {    /* 使用指针求和 */
        sum = sum + *p;
    }

    printf("calculated by pointer, sum = %ld \n", sum);

    return 0;
}