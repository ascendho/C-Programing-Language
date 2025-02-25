/*【例3-9】两个数的简单计算器。
 * 编写一个简单计算器程序，可根据输入的运算符，对2个整数进行加、减、乘、除和求余运算，请对除数为0的情况作特别处理。要求使用switch语句编写 */

/* 两个数的简单计算器 */
# include <stdio.h>

int main() {
    int value1, value2;
    char op;

    /* 提示输入一个表达式 */
    printf("Type in an expression: ");
    scanf("%d%c%d", &value1, &op, &value2);

    switch (op) {
        case '+':
            printf("=%d\n", value1 + value2);
            break;
        case '-':
            printf("=%d\n", value1 - value2);
            break;
        case '*':
            printf("=%d\n", value1 * value2);
            break;
        case '/':
            if (value2 != 0) {
                printf("=%d\n", value1 / value2);
            } else {
                /* 对除数为0做特殊处理 */
                printf("Divisor can not be 0!\n");
            }
            break;
        case '%':
            if (value2 != 0) {
                printf("=%d\n", value1 % value2);
            } else {
                /* 对除数为0做特殊处理 */
                printf("Divisor can not be 0!\n");
            }
            break;
        default:
            printf("Unknown operator\n");
            break;
    }

    return 0;
}