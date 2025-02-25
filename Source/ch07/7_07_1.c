/* 【例7-7-1】二分查找法。设已有一个n（1≤n≤10）个元素的整型数组a，且按值从小到大有序。
 * 输入一个整数x，然后在数组中查找x，如果找到，输出相应的下标，否则，输出"Not Found"。*/

/* 二分查找法-简化初始条件 */
# include <stdio.h>

int main() {
    int low, high, mid, n = 10, x;

    /* 有序数组 */
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* 提示输入x */
    printf("Enter x：");
    scanf("%d", &x);

    /* 开始时查找区间为整个数组 */
    low = 0;
    high = n - 1;

    while (low <= high) {                /* 循环条件 */
        mid = (low + high) / 2;          /* 中间位置 */

        if (x == a[mid]) {
            break;                       /* 查找成功，中止循环 */
        } else if (x < a[mid]) {
            high = mid - 1;              /* 前半段，high前移 */
        } else {
            low = mid + 1;               /* 后半段，low后移 */
        }
    }

    if (low <= high) {
        /* 找到，输出下标 */
        printf("Index is %d \n", mid);
    } else {
        /* x不在数组a中 */
        printf("Not Found\n");
    }

    return 0;
}