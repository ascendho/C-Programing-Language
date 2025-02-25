/*【例7-1】输入n个整数（1≤n≤10），计算这些数的平均值，再输出所有大于平均值的数。*/

/* 输出所有大于平均值的数 */
#include <stdio.h>

int main() {
    int i, n;
    double average, sum;          /* average存放平均值，sum保存数据之和 */
    int a[10];                    /* 定义1个数组a，它有10个整型元素 */

    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 10) {

        /* 提示输入n个数 */
        printf("Enter %d integers: ", n);

        /* 将输入数依次赋给数组a的前n个元素a[0]～a[n-1]（如图7.1所示） */
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        sum = 0;

        /* 求数组a的前n个元素之和 */
        for (i = 0; i < n; i++) {
            sum = sum + a[i];
        }

        /* 求平均值 */
        average = sum / n;

        printf("average = %.2f\n", average);
        printf(">average:");

        /* 逐个与平均值比较，输出大于平均值的数 */
        for (i = 0; i < n; i++) {
            if (a[i] > average) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    } else {
        /* 输出错误提示 */
        printf("Invalid Value.\n");
    }

    return 0;
}