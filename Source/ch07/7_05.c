/* ����7-5��ѡ�����򷨡�����һ��������n (1<n��10)��������n����������ѡ�񷨽����Ǵ�С�������������� */

/* ѡ������ */
# include <stdio.h>

/* ������ų���MAXN */
# define MAXN 10

int main() {
    int i, index, k, n, temp;
    int a[MAXN];

    /* ��ʾ����n */
    printf("Enter n: ");
    scanf("%d", &n);

    /* ��ʾ����n���� */
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ��n�������� */
    for (k = 0; k < n - 1; k++) {
        index = k;                        /* index�����Сֵ���ڵ��±� */
        for (i = k + 1; i < n; i++) {     /* Ѱ����Сֵ�����±� */
            if (a[i] < a[index]) {
                index = i;
            }
        }

        /* ��СԪ�����±�Ϊk��Ԫ�ؽ��� */
        temp = a[index];
        a[index] = a[k];
        a[k] = temp;
    }

    printf("After sorted: ", n);

    /* ���n������Ԫ�ص�ֵ */
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}