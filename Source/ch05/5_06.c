/*【例5-6】数字金字塔。输入一个正整数n，输出n行数字金字塔 */

/* 输出数字金字塔 */
#include <stdio.h>

/* 函数声明 */
void pyramid(int n);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    /* 调用函数，输出n行数字金字塔 */
    pyramid(n);

    return 0;
}

/* 函数定义，输出n行数字金字塔*/
void pyramid(int n)
{
    int i, j;

    for (i = 1; i <= n; i++) {                /* 需要输出的行数 */
        for (j = 1; j <= n - i; j++) {        /* 输出每行左边的空格 */
            printf(" ");
        }

        for (j = 1; j <= i; j++) {            /* 输出每行的数字 */
            /* %d后面有1个空格 */
            printf("%d ", i);
        }

        putchar('\n');
    }

    return;
}