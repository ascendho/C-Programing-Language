/*【例3-2】奇偶分家。
 * 输入一个正整数n，再输入n个非负整数，统计奇数和偶数各有多少个？ */

/* 奇偶分家 */
#include <stdio.h>

int main() {
    int count_odd, count_even, i, n, number;

    count_odd = 0;            /* count_odd 记录奇数的个数 */
    count_even = 0;           /* count_even 记录偶数的个数 */

    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    /* 提示输入n个数 */
    printf("Enter %d numbers: ", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &number);

        if (number % 2 != 0) {         /* 若number除以2的余数不是0，则为奇数 */
            count_odd++;               /* 统计奇数的个数 */
        } else {                       /* 若number除以2的余数是0，则为偶数 */
            count_even++;              /* 统计偶数的个数 */
        }
    }

    printf("Odd: %d, Even: %d \n", count_odd, count_even);

    return 0;
}