/*【例11-2】二级指针操作示例 */

/* 二级指针操作示例 */
#include<stdio.h>

int main() {
    int a, b, t;
    int *pa = &a, *pb = &b, *pt;
    int **ppa = &pa, **ppb = &pb, **ppt;

    a = 10, b = 20;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb);  /* 输出数据之间间隔一个空格 */

    ppt = ppb;
    ppb = ppa;
    ppa = ppt;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* 输出数据之间间隔一个空格 */

    pt = pb;
    pb = pa;
    pa = pt;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* 输出数据之间间隔一个空格 */

    t = b;
    b = a;
    a = t;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* 输出数据之间间隔一个空格 */

    return 0;
}