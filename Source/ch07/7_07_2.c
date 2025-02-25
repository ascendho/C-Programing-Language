/* ����7-7-2�����ֲ��ҷ�������һ��������n (1<n��10)��������n������������Ѱ�ֵ��С�����������У�
 * ���������һ������x��Ȼ���������в���x������ҵ��������Ӧ���±꣬�������"Not Found"��*/

/* ���ֲ��ҷ� */
# include <stdio.h>

/* ������ų���MAXN */
# define MAXN 10

int main() {
    int i, low, high, mid, n, sorted, x;
    int a[MAXN];

    /* ��ʾ����n */
    printf("Enter n: ");
    scanf("%d", &n);

    /* ��ʾ����n���� */
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sorted = 1;
    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted == 0) {
        printf("Invalid Value\n");
    } else {
        /* ��ʾ����x */
        printf("Enter x��");
        scanf("%d", &x);

        /* ��ʼʱ��������Ϊ�������� */
        low = 0;
        high = n - 1;

        while (low <= high) {                /* ѭ������ */
            mid = (low + high) / 2;          /* �м�λ�� */

            if (x == a[mid])
                break;                       /* ���ҳɹ�����ֹѭ�� */
            else if (x < a[mid])
                high = mid - 1;              /* ǰ��Σ�highǰ�� */
            else
                low = mid + 1;               /* ���Σ�low���� */
        }

        if (low <= high) {
            /* �ҵ�������±� */
            printf("Index is %d \n", mid);
        } else {
            /* x��������a�� */
            printf("Not Found\n");
        }
    }

    return 0;
}