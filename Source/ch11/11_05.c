/*����11-5�� ����Ӣ�Ĳ�ͷʫ����ν��ͷʫ���ǽ�һ��ʫÿһ��ĵ�һ����������������ɵ����ݾ��Ǹ�ʫ��������Ϣ��
 * ��д��������һ��Ӣ�Ĳ�ͷʫ�����ܲ�ͷʫ�������������Ϣ��
   ����Ĳ�ͷʫС��20�У�ÿ�в�����80���ַ�����#��Ϊ���������־��ʹ�ö�̬�ڴ���䷽�������ַ��������롣*/

/* Ӣ�Ĳ�ͷʫ��ʹ��ָ�����顢��̬�ڴ���䣩*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int i, n = 0;
    char *poem[20], str[80], mean[20];

    gets(str);

    while (str[0] != '#') {
        poem[n] = (char *) malloc(sizeof(char) * (strlen(str) + 1));  /* ��̬���� */
        strcpy(poem[n], str);       /* ��������ַ�����ֵ����̬�ڴ浥Ԫ */
        n++;
        gets(str);
    }

    for (i = 0; i < n; i++) {
        mean[i] = *poem[i];                /* ÿ��ȡ��һ���ַ� */
        free(poem[i]);             /* �ͷŶ�̬�ڴ浥Ԫ */
    }

    mean[i] = '\0';

    puts(mean);

    return 0;
}