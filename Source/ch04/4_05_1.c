/*【例4-5-1】判断一个整数是否为素数。输入一个整数m，判断它是否为素数。
 * 素数就是只能被1和自身整除的正整数，1不是素数，2是素数 */

/* 判断整数m是否为素数-1 */
# include <stdio.h>
# include <math.h>

int main() {
    int i, limit, m;

    /* 输入提示 */
    printf("Enter a number: ");
    scanf("%d", &m);

    if (m <= 1) {                   /* 小于等于1的数不是素数 */
        printf("No!\n");
    } else if (m == 2) {            /* 2是素数 */
        printf("%d is a prime number!\n", m);
    } else {                        /* 其他情况：大于2的正整数 */
        limit = sqrt(m) + 1;

        for (i = 2; i <= limit; i++) {
            if (m % i == 0) {
                break;              /* 若m能被某个i整除，则m不是素数，提前结束循环 */
            }
        }

        if (i > limit) {            /* 若循环正常结束，说明m不能被任何一个i整除 */
            printf("%d is a prime number!\n", m);
        } else {                    /* m不是素数 */
            printf("No!\n");
        }
    }

    return 0;
}