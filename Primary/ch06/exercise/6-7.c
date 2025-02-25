#include <stdio.h>

int main() {
    char op;
    int operand1, operand2, res;

    // 输入第一个操作数
    scanf("%d", &operand1);

    // 结果暂存为operand1, 例如"1="这种表达式
    res = operand1;

    // 输入运算符
    op = getchar();

    while (op != '=') {

        // 输入第二个操作数
        scanf("%d", &operand2);

        // 判断运算符
        switch (op) {
            case '+':
                res = operand1 + operand2;
                break;
            case '-':
                res = operand1 - operand2;
                break;
            case '*':
                res = operand1 * operand2;
                break;
            case '/':
                if (operand2 == 0) {
                    printf("ERROR");
                    return 0;
                } else
                    res = operand1 / operand2;
                break;
            default:
                printf("ERROR");
                return 0;
        }

        // 更新操作数1
        operand1 = res;

        // 更新运算符
        op = getchar();
    }

    printf("%d\n", res);

    return 0;
}