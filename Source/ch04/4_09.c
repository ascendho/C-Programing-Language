/*【例4-9】菲波那契数列问题。输入正整数n（1<=n<=46），输出菲波那契（Fibonacci）数列的前n项：1，1，2，3，5，8，13，...，每行输出5个
 * Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列 */

/* 输出斐波那契数列的前n项 */
# include <stdio.h>

int main() {
    /* x1和x2依次代表前两项，x表示其后一项 */
    int i, n, x1, x2, x;

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1 || n > 46) {
        printf("Invalid.\n");
    } else if (n == 1) {
        /* 输出第1项 */
        printf("%10d", 1);
    } else {

        /* 头两项都是1 */
        x1 = 1;
        x2 = 1;

        /* 先输出头两项 */
        printf("%10d%10d", x1, x2);

        for (i = 3; i <= n; i++) {         /* 循环输出后n-2项 */
            x = x1 + x2;                   /* 计算新项 */
            printf("%10d", x);

            /* 如果i是5的倍数，换行 */
            if (i % 5 == 0) {
                printf("\n");
            }

            /* 更新x1和x2，为下一次计算新项x作准备*/
            x1 = x2;
            x2 = x;
        }
    }

    return 0;
}