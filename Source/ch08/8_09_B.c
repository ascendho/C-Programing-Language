/*����8-9�� ����С���ַ�����
 * ����n���ַ��������������С���ַ�����*/

/* ����B���Աȣ������� */
#include <stdio.h>

int main() {
    int i, n;
    int x, min;

    scanf("%d", &n);
    scanf("%d", &x);

    min = x;

    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }

    printf("min is %d\n", min);

    return 0;
}