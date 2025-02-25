/*【例7-3】顺序查找法。将输入的n个整数存入数组a中，再输入1个整数x，然后在数组a中查找给定的x。
 * 如果数组a中的元素与x的值相同，输出所有满足条件的元素的下标（下标从0开始）；如果没有找到，输出"Not Found"。*/

/* 在数组中查找满足条件的所有整数 */
# include <stdio.h>

# define MAXN 10

int main() {
    int i, flag, n, x;
    int a[MAXN];

    /* 提示输入n和x */
    printf("Enter n, x: ");
    scanf("%d%d", &n, &x);

    /* 提示输入n个数 */
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* 先假设x不在数组a中，置flag为0 */
    flag = 0;

    for (i = 0; i < n; i++) {
        /* 如果在数组a中找到了x */
        if (a[i] == x) {

            /* 输出相应的下标 */
            printf("Index is %d\n", i);

            /* 置flag为1，说明在数组a中找到了x */
            flag = 1;
        }
    }

    /* 如果flag为0，说明x不在a中 */
    if (flag == 0) {
        printf("Not Found\n");
    }

    return 0;
}