/*����11-3��ʹ�ö���ָ�뷽ʽ��д��11-1��
 * һ�����ʱ����������ʾ��ɫ��Ӣ�ĵ��ʣ�����һ����ĸ��
 * �ڵ��ʱ��в��Ҳ���������Դ���ĸ��ͷ�ĵ��ʣ���û���ҵ������Not Found��Ҫ����ָ������Ͷ���ָ��ʵ�֡�*/

/* �����������ö���ָ�����ָ�����飩*/

#include<stdio.h>

int main() {
    int i, flag = 0;
    char ch;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"}; /* ָ�������ʼ�� */
    const char **pc;       /* �������ָ�� */

    pc = color;            /* ����ָ�븳ֵ */

    printf("Input a letter:");
    ch = getchar();

    for (i = 0; i < 5; i++) {
        if (**(pc + i) == ch) {
            flag = 1;
            puts(*(pc + i));
        }
    }

    if (flag == 0) {
        printf("Not Found\n");
    }

    return 0;
}