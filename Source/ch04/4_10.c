/*【例4-10】素数问题。输入2个正整数m和n（1<=m<=n<=500），输出m到n之间的全部素数，每行输出10个。
 * 素数就是只能被1和自身整除的正整数，1不是素数，2是素数 */

/* 使用嵌套循环求m到n之间的全部素数 */
#include <stdio.h>

/* 调用求平方根函数，需要包含数学库 */
#include <math.h>

int main() {
    /* flag的值为1表示是素数，为0表示不是素数 */
    int count, i, k, flag, limit, m, n;

    /* 输入提示 */
    printf("Enter m n: ");
    scanf("%d%d", &m, &n);

    /* count记录素数的个数，用于控制输出格式 */
    count = 0;

    if (m < 1 || n > 500 || m > n) {
        printf("Invalid.\n");
    } else {
        for (k = m; k <= n; k++) {
            if (k <= 1) {                /* 小于等于1的数不是素数 */
                flag = 0;
            } else if (k == 2) {         /* 2是素数 */
                flag = 1;
            } else {                     /* 其他情况：大于2的正整数 */
                flag = 1;                /* 先假设k是素数 */
                limit = sqrt(k) + 1;

                for (i = 2; i <= limit; i++) {
                    if (k % i == 0) {          /* 若k能被某个i整除，则k不是素数 */
                        flag = 0;              /* 置flag为 0 */
                        break;                 /* 提前结束循环 */
                    }
                }
            }

            if (flag == 1) {                /* 如果k是素数 */
                /* 输出k */
                printf("%6d", k);
                count++;                    /* 累加已经输出的素数个数 */
                if (count % 10 == 0) {      /* 如果count是10的倍数，换行 */
                    printf("\n");
                }
            }
        }
    }

    return 0;
}