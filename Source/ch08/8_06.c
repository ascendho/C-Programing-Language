/*����8-6������n��������Ϊ����Ԫ�أ��ֱ�ʹ�������ָ�������㲢������ǵĺ͡�*/
/* �ֱ�ʹ�������ָ���������Ԫ��֮�� */

#include <stdio.h>

int main() {
    /* ���������ָ����� */
    int i, n, a[10], *p;
    long sum = 0;

    printf("Enter n(n��10): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ʹ��������� */
    for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }

    printf("calculated by array, sum = %ld \n", sum);

    sum = 0;                         /* ���³�ʼ��sumΪ0 */
    for (p = a; p < a + n; p++) {    /* ʹ��ָ����� */
        sum = sum + *p;
    }

    printf("calculated by pointer, sum = %ld \n", sum);

    return 0;
}