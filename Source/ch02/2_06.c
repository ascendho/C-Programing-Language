/*【例2-6】输入两个整数lower和 upper，输出一张华氏－摄氏温度转换表，
 * 华氏温度的取值范围是[lower, upper]，每次增加1°F。计算公式如下，式中：c表示摄氏温度，f表示华氏温度 */

/* 输出华氏－摄氏温度转换表，华氏温度取值[lower,upper]，每次增加1°F */
#include <stdio.h>

int main() {
    /* fahr表示华氏度, celsius为摄氏度,lower为华氏温度下限,upper为上限 */
    int fahr, lower, upper;
    double celsius;

    printf("Enter lower:");                 /* 输入提示 */
    scanf("%d", &lower);                    /* 调用scanf()函数输入lower */

    printf("Enter upper:");                 /* 输入提示 */
    scanf("%d", &upper);                    /* 调用scanf()函数输入upper */

    /* 判断输入数据的合法性，即lower是否小于等于upper */
    if (lower <= upper) {                          /* lower小于等于upper时，转换温度并输出*/
        /* 输出温度转换表的表头 */
        printf("fahrcelsius\n");

        /* 温度重复转换：华氏温度从lower开始，到upper结束，每次增加1°F */
        for (fahr = lower; fahr <= upper; fahr++) {
            celsius = (5.0 / 9.0) * (fahr - 32);         /* 温度转换计算 */

            /* 输出 */
            printf("%4d%6.1f\n", fahr, celsius);
        }
    } else {                                             /* lower大于upper时 */
        /* 输出错误提示 */
        printf("Invalid Value!\n");
    }

    return 0;
}