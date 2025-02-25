/* 【例8-1】利用指针模拟密码开锁游戏 */

/*  获取密码的两种方法 */
#include <stdio.h>

int main() {
    int x = 5342;       /* 变量x用于存放密码值5342 */
    int *p = NULL;      /* 定义整型指针变量p，NULL值为0，代表空指针 */

    p = &x;             /*将变量x的地址存储在p中 */

    /* 通过变量名x输出密码值*/
    printf("If I know the name of the variable, I can get it's value by name: %d\n ", x);

    /* 通过变量x的地址输出密码值 */
    printf("If I know the address of the variable is: %x, then I also can get it's value by address: %d\n", p, *p);

    return 0;
}