/*【例10-6】分治法求解金块问题：老板有一袋金块（共n块，2≤n≤100），
 * 两名最优秀的雇员每人可以得到其中的一块，排名第一的得到最重的金块，排名第二的则得到袋子中最轻的金块。
 * 输入n及n个整数，用分治法求出最重金块和最轻金块。*/

# include <stdio.h>

#define MAXN 101

int max(int a[], int m, int n);

int min(int a[], int m, int n);

int main() {
    int i, n;
    int a[MAXN];

    printf("Enter n: ");                    /* 提示输入n */
    scanf("%d", &n);

    if (n >= 2 && n <= MAXN - 1) {
        printf("Enter %d integers: ", n);   /* 提示输入n个数 */
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("max = %d\n", max(a, 0, n - 1));
        printf("min = %d\n", min(a, 0, n - 1));
    } else {
        printf("Invalid Value.\n");        /* 输出错误提示 */
    }

    return 0;
}

/* 分治法求a[m]~a[n]中最大值的递归函数 */
int max(int a[], int m, int n) {
    int k, u, v;

    if (m == n) {            /* 数组a中只有1个元素，返回最大值a[m] */
        return a[m];
    }

    k = (m + n) / 2;             /* 计算中间元素的下标k */
    u = max(a, m, k);         /* 递归调用函数max()，在a[m]~a[k]中找出最大值赋给u */
    v = max(a, k + 1, n);    /* 递归调用函数max()，在a[k+1]~a[n]中找出最大值赋给v */

    return (u > v) ? u : v;      /* 比较u和v，返回其中较大的值 */
}

/* 分治法求a[m]~a[n]中最小值的递归函数 */
int min(int a[], int m, int n) {
    int k, u, v;

    if (m == n) {           /* 数组a中只有1个元素，返回最小值a[m] */
        return a[m];
    }
    k = (m + n) / 2;        /* 计算中间元素的下标k */
    u = min(a, m, k);         /* 递归调用函数min()，在a[m]~a[k]中找出最小值赋给u */
    v = min(a, k + 1, n);    /* 递归调用函数min()，在a[k+1]~a[n]中找出最小值赋给v */

    return (u < v) ? u : v;      /* 比较u和v，返回其中较大的值 */
}