/* 【例3-4】继续讨论例2-4中提出的分段计算水费的问题 */

/* 计算多分段函数 */
# include <stdio.h>

int main() {
    double x, y;                      /* 定义两个双精度浮点型变量 */

    printf("Enter x:");        /* 输入提示 */
    scanf("%lf", &x);          /* 输入 double 型数据用 %lf */

    if (x < 0) {
        y = 0;                    /* 满足x＜0 */
    } else if (x <= 15) {
        y = 4 * x / 3;            /* 不满足x＜0，但满足x≤15，即满足0≤x≤15 */
    } else {
        y = 2.5 * x - 10.5;       /* 既不满足x＜0，也不满足x≤15，即满足x>15 */
    }

    printf("f(%.2f) = %.2f\n", x, y);

    return 0;
}