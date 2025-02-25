/*����7-12�� Ϊ�˷�ֹ��Ϣ������������ȡ����Ҫ�ѵ�������ͨ�����ܷ�ʽ�任��Ϊ���ġ�
 * ����һ���Իس���Ϊ������־���ַ���������80���ַ�����������һ��������offset���ÿ������뽫����ܺ������
 * ��������ļ��ܹ����ǽ������е�������ĸ������ĸ��������ƶ�offsetλ���������ġ�
*/

/* ����������ܣ���ƫ�ƣ� */
# include<stdio.h>

# define MAXN 80         /* ������ų���MAXN */
# define M 26            /* ������ų���M����ʾ��ĸ���д�д����Сд��ĸ������26 */

int main() {
    int i, offset;
    char str[MAXN];

    /* �����ַ��� */
    /* ��ʾ�����ַ��� */
    printf("Enter a string: ");

    i = 0;
    while ((str[i] = getchar()) != '\n') {
        i++;
    }

    /* ע: �������� '\0' �������� */
    str[i] = '\0';

    /* ��ʾ����offset */
    printf("Enter offset: ");
    scanf("%d", &offset);

    if (offset > M) {            /* ���offset����26 */
        offset = offset % M;     /* ��λЧ���൱��ȡ������ */
    }

    /* ���� */
    /* ѭ��������str[i] ������ '\0' */
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if ((str[i] - 'A' + offset) < M) {
                str[i] = str[i] + offset;
            } else {
                /* ������Խ�� */
                /* ѭ����λ */
                str[i] = str[i] - (M - offset);
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            if ((str[i] - 'a' + offset) < M) {
                str[i] = str[i] + offset;
            } else {
                /* ������Խ�� */
                /* ѭ����λ */
                str[i] = str[i] - (M - offset);
            }
        }
    }

    /* ��������ַ��� */
    printf("After being encrypted: ");

    /* ѭ��������str[i] ������ '\0' */
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    return 0;
}