/*����7-14��ʮ�������ַ���ת����ʮ���ƷǸ�����������һ����'#'Ϊ������־���ַ���������10���ַ�����
 * ��ȥ���еķ�ʮ�������ַ������ִ�Сд�������һ���µı�ʾʮ���������ֵ��ַ�����������ַ���������ת��Ϊʮ�������������
*/

/* ʮ�������ַ���ת����ʮ���ƷǸ����� */
# include <stdio.h>

/* ������ų���MAXLINE */
# define MAXLINE 80

int main() {
    int i, k, number;
    char hexad[MAXLINE], str[MAXLINE];

    /* �����ַ��� */
    /* ��ʾ�����ַ��� */
    printf("Enter a string: ");

    i = 0;

    /* ���������Ϊ '#' */
    while ((str[i] = getchar()) != '#') {
        i++;
    }

    /* ���ַ��������� '\0' ��������str */
    str[i] = '\0';

    /* ��ȥ��ʮ�������ַ����������ַ���hexad */

    // ����iֵ
    i = 0;

    /* k�����ַ���hexad���±� */
    k = 0;

    // ���˵���16���Ƶ��ַ�
    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')) {

            /* ��ʮ�������ַ��������ַ��� */
            hexad[k] = str[i];
            k++;
        }

        i++;
    }

    /* ���ַ���������� */
    hexad[k] = '\0';

    /* ���ʮ���������ַ��� */
    printf("New string: ");

    for (i = 0; hexad[i] != '\0'; i++) {
        putchar(hexad[i]);
    }

    printf("\n");

    /* ת��Ϊʮ�������� */
    /* ���ʮ������������0 */
    number = 0;

    /* ���ת�� */
    for (i = 0; hexad[i] != '\0'; i++) {
        if (hexad[i] >= '0' && hexad[i] <= '9') {
            number = number * 16 + hexad[i] - '0';
        } else if (hexad[i] >= 'A' && hexad[i] <= 'F') {
            number = number * 16 + hexad[i] - 'A' + 10;
        } else if (hexad[i] >= 'a' && hexad[i] <= 'f') {
            number = number * 16 + hexad[i] - 'a' + 10;
        }
    }

    /* ���ʮ����ֵ */
    printf("Number = %d\n", number);

    return 0;
}