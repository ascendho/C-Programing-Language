/* 【例3-5】求解简单的四则运算表达式。
 * 输入一个四则运算表达式，输出运算结果，要求对除数为0的情况作特别处理 */

/* 求解简单的四则运算表达式 */
# include <stdio.h>

int main() {
    double value1, value2;
    char op;

    /* 提示输入一个表达式 */
    printf("Type in an expression: ");

    /* 输入表达式 */
    scanf("%lf%c%lf", &value1, &op, &value2);

    if (op == '+') {                                 /* 判断运算符是否为 '+' */
        /* 对操作数做加法操作*/
        printf("=%.2f\n", value1 + value2);
    } else if (op == '-') {                          /* 否则判断运算符是否为 '-' */
        printf("=%.2f\n", value1 - value2);
    } else if (op == '*') {                          /* 否则判断运算符是否为 '*' */
        printf("=%.2f\n", value1 * value2);
    } else if (op == '/') {                          /* 否则判断运算符是否为 '/' */
        if (value2 != 0) {
            printf("=%.2f\n", value1 / value2);
        } else {

            /* 对除数为0做特殊处理 */
            printf("Divisor can not be 0!\n");
        }
    } else {
            /* 运算符输入错误 */
        printf("Unknown operator!\n");
    }

    return 0;
}