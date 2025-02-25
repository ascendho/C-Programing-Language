/* 【例7-7-2】二分查找法。输入一个正整数n (1<n≤10)，再输入n个整数，如果已按值从小到大有序排列，
 * 则继续输入一个整数x，然后在数组中查找x，如果找到，输出相应的下标，否则，输出"Not Found"。*/

/* 二分查找法 */
# include <stdio.h>

/* 定义符号常量MAXN */
# define MAXN 10

int main() {
    int i, low, high, mid, n, sorted, x;
    int a[MAXN];

    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    /* 提示输入n个数 */
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sorted = 1;
    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted == 0) {
        printf("Invalid Value\n");
    } else {
        /* 提示输入x */
        printf("Enter x：");
        scanf("%d", &x);

        /* 开始时查找区间为整个数组 */
        low = 0;
        high = n - 1;

        while (low <= high) {                /* 循环条件 */
            mid = (low + high) / 2;          /* 中间位置 */

            if (x == a[mid])
                break;                       /* 查找成功，中止循环 */
            else if (x < a[mid])
                high = mid - 1;              /* 前半段，high前移 */
            else
                low = mid + 1;               /* 后半段，low后移 */
        }

        if (low <= high) {
            /* 找到，输出下标 */
            printf("Index is %d \n", mid);
        } else {
            /* x不在数组a中 */
            printf("Not Found\n");
        }
    }

    return 0;
}