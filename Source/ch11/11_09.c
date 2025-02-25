/*����11-9����дһ������calc(f, a, b)�������ι�ʽ����f(x)��[a, b]�ϵ���ֵ���֡�*/

/* ������ֵ���֣�����ָ����Ϊ��������ʾ���� */
#include <stdio.h>
#include <math.h>

double calc(double (*funp)(double), double a, double b);  /*����ԭ��˵�� */
double f1(double x), f2(double x);

int main() {
    double result;
    double (*funp)(double);

    result = calc(f1, 0.0, 1.0);        /* ������f1��Ϊ����calc��ʵ�� */

    printf("1: resule=%.4f\n", result);

    funp = f2;                                      /* �Ժ���ָ��funp��ֵ */
    result = calc(funp, 1.0, 2.0);            /* ����ָ��funp��Ϊ����calc��ʵ�� */

    printf("2: resule=%.4f\n", result);

    return 0;
}

/* ����ָ��funp��Ϊ�������β� */
double calc(double (*funp)(double), double a, double b) {
    double z;

    z = (b - a) / 2 * ((*funp)(a) + (*funp)(b));   /* ����funpָ��ĺ��� */

    return (z);
}

double f1(double x) {
    return (x * x);
}

double f2(double x) {
    return (sin(x) / x);
}