/* 【例7-9】输入一个正整数n (1＜n≤6)，根据下式生成一个n*n的方阵，将该方阵转置（行列互换）后输出。 */

/* 方阵转置 */
# include <stdio.h>

/* 定义符号常量MAXN */
# define MAXN 6

int main() {
    int i, j, n, temp;
    int a[MAXN][MAXN];


    printf("Enter n: ");
    scanf("%d", &n);

    /* 给二维数组赋值 */
    for (i = 0; i < n; i++) {                /* 行下标是外循环的循环变量 */
        for (j = 0; j < n; j++) {            /* 列下标是内循环的循环变量 */
            a[i][j] = i * n + j + 1;         /* 给数组元素赋值 */
        }
    }

    /* 行列互换*/
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) {                /* 只遍历上三角阵 */

                /* 以下3句交换 a[i][j] 和 a[j][i] */
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

    /* 遍历上三角的循环也可以写成：
     * for(i = 0; i<n; i++){
     *      for(j = i; j<n; j++){
     *          ...
     *          }
     *   }
     */

    /* 按矩阵的形式输出数组a */
    for (i = 0; i < n; i++) {            /* 针对所有行的循环 */
        for (j = 0; j < n; j++) {
            /* 输出第i行的所有元素 */
            printf("%4d", a[i][j]);
        }

        /* 换行 */
        printf("\n");
    }

    return 0;
}