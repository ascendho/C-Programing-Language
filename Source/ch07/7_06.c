/*����7-6��������ӽ�Ŀ��ӭ�̶ȡ�
 * ĳ����̨Ҫ������ڶԸ�̨8����Ŀ������Ӧ��Ŀ���Ϊ1~8�����ܻ�ӭ�������������nλ���ڣ�1��n��1000����
 * ��Ҫ���д��������ÿһλ���ڵ�ͶƱ�����ÿλ����ֻ��ѡ��һ����ϲ������ĿͶƱ����ͳ���������Ŀ�ĵ�Ʊ�����*/

/* ͶƱ���ͳ�� */
# include<stdio.h>

/* ������ų���MAXN */
# define MAXN 8

int main() {
    int i, n, response;

    /* �����±��Ӧ��Ŀ��ţ���ʹ��count[0] */
    int count[MAXN + 1];

    /* ��ʾ����n */
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= MAXN; i++) {
        /* ����Ŀ��������0 */
        count[i] = 0;
    }

    /* ���벢ͳ��ͶƱ���� */
    for (i = 1; i <= n; i++) {
        /* ������ʾ */
        printf("Enter your response: ");
        scanf("%d", &response);

        if (response >= 1 && response <= MAXN) {        /* ���ͶƱ�Ƿ���Ч*/
            count[response]++;                          /* ��Ӧ��Ŀ��Ʊ��1 */
        } else {
            printf("invalid: %d\n", response);
        }
    }

    printf("result:\n");

    /* �����Ʊ����Ϊ�����Ŀ��Ʊ��� */
    for (i = 1; i <= MAXN; i++) {
        if (count[i] != 0) {
            printf("%4d%4d\n", i, count[i]);
        }
    }

    return 0;
}