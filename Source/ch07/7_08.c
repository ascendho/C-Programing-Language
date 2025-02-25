/*【例7-8】输入两个正整数m和n（1≤m,n≤6），再输入一个1个m×n的矩阵，找出最大值以及它的行下标和列下标。假设最大值唯一。*/

/* 找出矩阵中的最大值及其行下标和列下标 */
# include <stdio.h>

# define MAXM 6                /* 定义符号常量MAXM */
# define MAXN 6                /* 定义符号常量MAXN */

int main() {
    int col, i, j, m, n, row;
    int a[MAXM][MAXN];

    /* 提示输入m和n */
    printf("Enter m, n: ");
    scanf("%d %d", &m, &n);


    /* 提示输入m*n个数 */
    printf("Enter %d integers: \n", m * n);

    /* 将输入的数存入二维数组 */
    for (i = 0; i < m; i++) {                         /* 行下标是外循环的循环变量 */
        for (j = 0; j < n; j++) {                     /* 列下标是内循环的循环变量 */
            scanf("%d", &a[i][j]);             /* 输入数组元素 */
        }
    }

    /* 先假设 a[0][0] 是最大值 */
    row = col = 0;

    /* 遍历二维数组，找出最大值 a[row][col] */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            /* 如果 a[i][j] 比假设值大 */
            if (a[i][j] > a[row][col]) {
                /* 再假设 a[i][j] 是新的最大值 */
                row = i;
                col = j;
            }
        }
    }

    printf("max = a[%d][%d] = %d\n", row, col, a[row][col]);

    return 0;
}