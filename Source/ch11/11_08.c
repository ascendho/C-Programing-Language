/*����11-8������һ���ַ�����һ���ַ���������ַ����ַ����У��ʹӸ��ַ��״γ��ֵ�λ�ÿ�ʼ����ַ����е��ַ���
 * ���磬�����ַ�r���ַ���program�����rogram��Ҫ���庯��match(char *s, char ch)��
 * ���ַ���s�в����ַ�ch������ҵ��򷵻ص�һ���ҵ��ĸ��ַ����ַ����е�λ�ã���ַ�������򣬷��ؿ�ָ��NULL�� */

/* �����ַ����е��ַ�λ�ã�ָ����Ϊ�����ķ���ֵʾ����*/

#include <stdio.h>

char *match(char *s, char ch);    /* �������� */

int main() {
    char ch, str[80], *p = NULL;

    printf("Input the string: ");     /* ��ʾ�����ַ��� */
    scanf("%s", str);

    getchar();                               /* ���������ַ����������ַ�֮��ķָ��� */

    printf("Input a characters: ");    /* ������ʾ */
    ch = getchar();                           /* ����һ���ַ� */

    if ((p = match(str, ch)) != NULL) {    /* ���ú���match() */
        printf("%s\n", p);
    } else {
        printf("Not Found\n");
    }

    return 0;
}

char *match(char *s, char ch)    /* ��������ֵ���������ַ�ָ�� */
{
    while (*s != '\0') {
        if (*s == ch) {
            return (s);         /* �����ַ���s���ҵ��ַ�ch��������Ӧ�ĵ�ַ */
        }
        s++;
    }

    return (NULL);              /* ��s��û���ҵ�ch�����ؿ�ָ�� */
}