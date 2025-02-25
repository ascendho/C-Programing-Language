/* 【例10-3】递归法求最大公约数 。
 * 定义函数gcd(int m，int n)，计算m和n的最大公约数。*/

/* 用递归法求最大公约数 */
#include <stdio.h>

int gcd(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", gcd(m, n));

    return 0;
}

int gcd(int m, int n) {
    if (m % n == 0) {                   /* 递归出口 */
        return n;
    } else {
        return gcd(n, m % n);    /* 递归调用 */
    }
}