/* 【例8-3】角色互换。有两个角色分别用变量a和b表示。为了实现角色互换，
    现制定了三套方案，通过函数调用来交换变量a和b的值，即swap1()、swap2()和swap3()。
    请分析这三个函数中，哪个函数可以实现这样的功能。
*/

/*  通过函数调用来交换变量值的示例程序 */
# include <stdio.h>

void swap1(int x, int y), swap2(int *px, int *py), swap3(int *px, int *py);

int main() {
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;


    swap1(a, b);                        /* 使用变量a，b调用函数swap1() */

    printf("After calling swap1: a = %d b = %d\n", a, b);

    a = 1;
    b = 2;
    swap2(pa, pb);                    /* 使用指针pa，pb调用函数swap2()*/

    printf("After calling swap2: a = %d b = %d\n", a, b);

    a = 1;
    b = 2;
    swap3(pa, pb);                    /* 使用指针pa，pb调用swap3() */

    printf("After calling swap3: a = %d b = %d\n", a, b);

    return 0;
}

void swap1(int x, int y) {
    int t;

    t = x;
    x = y;
    y = t;
}

void swap2(int *px, int *py) {
    int t;

    t = *px;
    *px = *py;
    *py = t;
}

void swap3(int *px, int *py) {
    int *pt;

    pt = px;
    px = py;
    py = pt;
}