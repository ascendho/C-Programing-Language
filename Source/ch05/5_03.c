/* 使用函数判断完全平方数。
 * 定义一个判断完全平方数的函数IsSquare(n)，当n为完全平方数时返回1，否则返回0，不允许调用数学库函数 */

/* 使用函数判断完全平方数 */
#include <stdio.h>

int IsSquare(int n);

int main() {
    int n;

    scanf("%d", &n);

    if (IsSquare(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

/* 判断完全平方数的函数 */
int IsSquare(int n)
{
    int i;

    for (i = 1; n > 0; i = i + 2) {
        n = n - i;
    }

    if (n == 0) {
        return 1;        /* 是完全平方数返回1 */
    } else {
        return 0;        /* 不是完全平方数返回0 */
    }
}