/*【例7-2】利用数组计算斐波那契数列的前n个数（1≤n≤46），即1, 1, 2, 3, 5, …,55，
 * 并按每行打印5个数的格式输出，如果最后一行的输出少于5个数，也需要换行。*/

/* 利用数组计算斐波那契数列 */
# include <stdio.h>

# define MAXN 46                               /* 定义符号常量MAXN */

int main() {
    int i, n;

    /* 数组初始化，生成斐波那契数列前两个数 */
    int fib[MAXN] = {1, 1};


    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 46) {
        /* 计算斐波那契数列剩余的n-2个数 */
        for (i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        /* 输出斐波那契数列 */
        for (i = 0; i < n; i++) {
            printf("%11d", fib[i]);

            /* 每输出5个数就换行(因为i从0开始，当i为4时已经输出了5个数，所以加1) */
            if ((i + 1) % 5 == 0) {
                printf("\n");
            }
        }

        /* 如果总数不是5的倍数，换行 */
        if (n % 5 != 0) {
            printf("\n");
        }
    } else {
        /* 输出错误提示 */
        printf("Invalid Value.\n");
    }

    return 0;
}