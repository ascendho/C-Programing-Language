/*����8-12��������һ��������n������������n�����������㲢�����n�������ĺ͡�
 * Ҫ��ʹ�ö�̬�ڴ���䷽��Ϊ��n����������ռ䡣*/

/* ������������� */
# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, sum, i, *p;

    printf("Enter n: ");
    scanf("%d", &n);

    /* Ϊ����p��̬����n���������ʹ�С�Ŀռ� */
    if ((p = (int *) calloc(n, sizeof(int))) == NULL) {
        printf("Not able to allocate memory. \n");
        exit(1);
    }

    /* ��ʾ����n������ */
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    sum = 0;

    /* ����n�������� */
    for (i = 0; i < n; i++) {
        sum = sum + *(p + i);
    }

    printf("The sum is %d \n", sum);

    /* �ͷŶ�̬����Ŀռ� */
    free(p);

    return 0;
}