/* ����10-3���ݹ鷨�����Լ�� ��
 * ���庯��gcd(int m��int n)������m��n�����Լ����*/

/* �õݹ鷨�����Լ�� */
#include <stdio.h>

int gcd(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", gcd(m, n));

    return 0;
}

int gcd(int m, int n) {
    if (m % n == 0) {                   /* �ݹ���� */
        return n;
    } else {
        return gcd(n, m % n);    /* �ݹ���� */
    }
}