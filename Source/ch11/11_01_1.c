/*����11-1�� һ�����ʱ����������ʾ��ɫ��Ӣ�ĵ��ʣ�����һ����ĸ��
 * �ڵ��ʱ��в��Ҳ���������Դ���ĸ��ͷ�ĵ��ʣ���û���ҵ������Not Found��*/

/* ������������ָ������ʵ�֣�*/
#include<stdio.h>

int main() {
    int i, flag = 0;
    char ch;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"};         /* ��7��*/

    printf("Input a letter: ");
    ch = getchar();

    for (i = 0; i < 5; i++) {
        if (*color[i] == ch) {
            flag = 1;
            puts(color[i]);
        }
    }

    if (flag == 0) {
        printf("Not Found\n");
    }

    return 0;
}