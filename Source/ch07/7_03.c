/*����7-3��˳����ҷ����������n��������������a�У�������1������x��Ȼ��������a�в��Ҹ�����x��
 * �������a�е�Ԫ����x��ֵ��ͬ�������������������Ԫ�ص��±꣨�±��0��ʼ�������û���ҵ������"Not Found"��*/

/* �������в��������������������� */
# include <stdio.h>

# define MAXN 10

int main() {
    int i, flag, n, x;
    int a[MAXN];

    /* ��ʾ����n��x */
    printf("Enter n, x: ");
    scanf("%d%d", &n, &x);

    /* ��ʾ����n���� */
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* �ȼ���x��������a�У���flagΪ0 */
    flag = 0;

    for (i = 0; i < n; i++) {
        /* ���������a���ҵ���x */
        if (a[i] == x) {

            /* �����Ӧ���±� */
            printf("Index is %d\n", i);

            /* ��flagΪ1��˵��������a���ҵ���x */
            flag = 1;
        }
    }

    /* ���flagΪ0��˵��x����a�� */
    if (flag == 0) {
        printf("Not Found\n");
    }

    return 0;
}