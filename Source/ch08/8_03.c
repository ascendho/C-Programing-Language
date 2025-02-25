/* ����8-3����ɫ��������������ɫ�ֱ��ñ���a��b��ʾ��Ϊ��ʵ�ֽ�ɫ������
    ���ƶ������׷�����ͨ��������������������a��b��ֵ����swap1()��swap2()��swap3()��
    ����������������У��ĸ���������ʵ�������Ĺ��ܡ�
*/

/*  ͨ��������������������ֵ��ʾ������ */
# include <stdio.h>

void swap1(int x, int y), swap2(int *px, int *py), swap3(int *px, int *py);

int main() {
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;


    swap1(a, b);                        /* ʹ�ñ���a��b���ú���swap1() */

    printf("After calling swap1: a = %d b = %d\n", a, b);

    a = 1;
    b = 2;
    swap2(pa, pb);                    /* ʹ��ָ��pa��pb���ú���swap2()*/

    printf("After calling swap2: a = %d b = %d\n", a, b);

    a = 1;
    b = 2;
    swap3(pa, pb);                    /* ʹ��ָ��pa��pb����swap3() */

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