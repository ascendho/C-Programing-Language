/*【例7-4-2】输入一个正整数n (1≤n≤10)，再输入n个整数，将它们存入数组a中。
① 输出最小值和它所对应的最小下标。
② 将最小值与第一个数交换，输出交换后的n个数。*/

/* 将数组的最小值与第一个数交换 */
# include <stdio.h>

/* 定义符号常量MAXN */
# define MAXN 10

int main() {
    int i, index, n;
    int a[MAXN];

    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    /* 提示输入n 个数 */
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* 找最小值a[index] */
    index = 0;                    /* 假设a[0]是最小值，即下标为0的元素最小 */

    for (i = 1; i < n; i++) {
        if (a[i] < a[index]) {    /* 如果 a[i] 比假设的最小值还小 */
            index = i;            /* 再假设 a[i] 是新的最小值，即下标为 i 的元素最小 */
        }
    }

    /* 输出最小值和对应的下标 */
    printf("min is %d\tsub is %d\n", a[index], index);

    {
        int temp;                /* 在复合语句中定义变量temp*/
        temp = a[index];         /* 以下3句交换a[index]和a[0] */
        a[index] = a[0];
        a[0] = temp;

        for (i = 0; i < n; i++) {
            printf(" %d ", a[i]);
        }
    }

    return 0;
}