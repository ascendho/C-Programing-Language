/*����11-2������ָ�����ʾ�� */

/* ����ָ�����ʾ�� */
#include<stdio.h>

int main() {
    int a, b, t;
    int *pa = &a, *pb = &b, *pt;
    int **ppa = &pa, **ppb = &pb, **ppt;

    a = 10, b = 20;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb);  /* �������֮����һ���ո� */

    ppt = ppb;
    ppb = ppa;
    ppa = ppt;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* �������֮����һ���ո� */

    pt = pb;
    pb = pa;
    pa = pt;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* �������֮����һ���ո� */

    t = b;
    b = a;
    a = t;

    printf("%d %d %d %d %d %d\n", a, b, *pa, *pb, **ppa, **ppb); /* �������֮����һ���ո� */

    return 0;
}