/*����7-1������n��������1��n��10����������Щ����ƽ��ֵ����������д���ƽ��ֵ������*/

/* ������д���ƽ��ֵ���� */
#include <stdio.h>

int main() {
    int i, n;
    double average, sum;          /* average���ƽ��ֵ��sum��������֮�� */
    int a[10];                    /* ����1������a������10������Ԫ�� */

    /* ��ʾ����n */
    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 10) {

        /* ��ʾ����n���� */
        printf("Enter %d integers: ", n);

        /* �����������θ�������a��ǰn��Ԫ��a[0]��a[n-1]����ͼ7.1��ʾ�� */
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        sum = 0;

        /* ������a��ǰn��Ԫ��֮�� */
        for (i = 0; i < n; i++) {
            sum = sum + a[i];
        }

        /* ��ƽ��ֵ */
        average = sum / n;

        printf("average = %.2f\n", average);
        printf(">average:");

        /* �����ƽ��ֵ�Ƚϣ��������ƽ��ֵ���� */
        for (i = 0; i < n; i++) {
            if (a[i] > average) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    } else {
        /* ���������ʾ */
        printf("Invalid Value.\n");
    }

    return 0;
}