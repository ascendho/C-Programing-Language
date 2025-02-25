/*【例5-8】用函数实现财务现金记账。
 * 先输入操作类型（1收入，2支出，0结束），再输入操作金额，计算现金剩余额，可多次操作直到输入操作类型为0时结束。
 * 要求定义并调用函数，其中现金收入与现金支出分别用不同函数实现 */

#include<stdio.h>

/* 函数声明  */
void income(double number), expend(double number);

/* 定义全局变量，保存现金余额 */
double cash;

int main() {
    int choice;
    double value;

    cash = 0;                                    /* 初始金额=0 */
    printf("Enter operate choice(0--end, 1--income, 2--expend):");

    scanf("%d", &choice);                 /* 输入操作类型 */

    while (choice != 0) {                        /* 若输入类型为0，循环结束  */
        if (choice == 1 || choice == 2) {
            /* 输入操作现金额 */
            printf("Enter cash value:");
            scanf("%lf", &value);

            if (choice == 1) {
                income(value);               /* 函数调用，计算现金收入 */
            } else {
                expend(value);               /* 函数调用，计算现金支出 */
            }

            printf("current cash:%.2f\n", cash);
        }

        printf("Enter operate choice(0--end, 1--income, 2--expend):");

        /* 继续输入操作类型 */
        scanf("%d", &choice);
    }

    return 0;
}

/* 定义计算现金收入函数 */
void income(double number) {
    cash = cash + number;                /*  改变全局变量cash  */
}

/* 定义计算现金支出函数 */
void expend(double number) {
    cash = cash - number;                /*  改变全局变量cash  */
}