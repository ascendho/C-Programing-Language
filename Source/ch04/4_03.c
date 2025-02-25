/* 【例4-3】从键盘读入一个整数，统计该数的位数。例如，输入12534，输出5；输入-99，输出2；输入0，输出1 */

/* 统计一个整数的位数 */
# include <stdio.h>

int main() {
    /* count记录整数number的位数 */
    int count, number, t_number;

    count = 0;

    /* 输入提示 */
    printf("Enter a number:");
    scanf("%d", &number);

    t_number = number;                  /* 保护输入数据number的值不被改变 */

    if (t_number < 0) {                 /* 将输入的负数转换为正数 */
        t_number = -t_number;
    }

    do {
        count++;                    /* 位数加1 */
        t_number = t_number / 10;   /* 整除后减少一位个位数，组成一个新数 */
    } while (t_number != 0);        /* 判断循环条件 */

    printf("It contains %d digits.\n", count);

    return 0;
}