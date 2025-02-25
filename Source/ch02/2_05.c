/*【例2-5】坚持的力量。输入能力的初始值 initial、努力参数factor和坚持天数day，根据下列公式计算出坚持后达到的能力值，输出时保留两位小数 */

# include <stdio.h>
# include <math.h>   /* 程序中调用了数学库函数，需包含头文件math.h */

int main() {
    int day;                            /* 定义1个整型变量 */
    double factor, initial, result;     /* 定义3个双精度浮点型变量 */

    printf("Enter initial:");              /* 提示输入 initial */
    scanf("%lf", &initial);                /* 调用scanf()函数输入, %lf 中的l是字母 */

    printf("Enter factor:");               /* 提示输入 factor */
    scanf("%lf", &factor);                 /* 调用scanf()函数输入, %lf 中的l是字母 */

    printf("Enter day:");                  /* 提示输入 day */
    scanf("%d", &day);                     /* 调用scanf()函数输入 */


    /* 调用幂函数pow()计算 */
    result = initial * pow(1 + factor, day);

    printf("result = %.2f\n", result);

    return 0;
}