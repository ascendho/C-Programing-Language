/* ����7-7-1�����ֲ��ҷ���������һ��n��1��n��10����Ԫ�ص���������a���Ұ�ֵ��С��������
 * ����һ������x��Ȼ���������в���x������ҵ��������Ӧ���±꣬�������"Not Found"��*/

/* ���ֲ��ҷ�-�򻯳�ʼ���� */
# include <stdio.h>

int main() {
    int low, high, mid, n = 10, x;

    /* �������� */
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* ��ʾ����x */
    printf("Enter x��");
    scanf("%d", &x);

    /* ��ʼʱ��������Ϊ�������� */
    low = 0;
    high = n - 1;

    while (low <= high) {                /* ѭ������ */
        mid = (low + high) / 2;          /* �м�λ�� */

        if (x == a[mid]) {
            break;                       /* ���ҳɹ�����ֹѭ�� */
        } else if (x < a[mid]) {
            high = mid - 1;              /* ǰ��Σ�highǰ�� */
        } else {
            low = mid + 1;               /* ���Σ�low���� */
        }
    }

    if (low <= high) {
        /* �ҵ�������±� */
        printf("Index is %d \n", mid);
    } else {
        /* x��������a�� */
        printf("Not Found\n");
    }

    return 0;
}