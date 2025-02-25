/* 【例5-5】 使用函数判断素数。定义函数prime(m)判断m是否为素数，当m为素数时返回1，否则返回0。
 * 素数就是只能被1和自身整除的正整数，1不是素数，2是素数 */

/* 使用函数判断素数 */
#include <stdio.h>

/* 调用求平方根函数，需要包含数学库 */
#include <math.h>

int prime(int m);

int main() {
    int m;

    /* 输入提示 */
    printf("Enter a number: ");
    scanf("%d", &m);

    if (prime(m) != 0) {                /* m是素数 */
        printf("%d is a prime number!\n", m);
    } else {                            /* m不是素数 */
        printf("No!\n");
    }

    return 0;
}

/* 判断素数的函数 */
int prime(int m) {
    int i, limit;

    if (m <= 1) {                   /* 小于等于1的数不是素数 */
        return 0;
    } else if (m == 2) {            /* 2是素数 */
        return 1;
    } else {                        /* 其他情况：大于2的正整数 */
        limit = sqrt(m) + 1;

        for (i = 2; i <= limit; i++) {
            if (m % i == 0) {
                return 0;           /* 若m能被某个i整除，则m不是素数，返回0 */
            }
        }

        /* 若循环正常结束，说明m不能被任何一个i整除，则m是素数，返回1 */
        return 1;
    }
}