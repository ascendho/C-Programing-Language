/* ����ָ������ */
#include<stdio.h>

int main() {
    int i, flag = 0;
    char ch;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"}; /* ָ�������ʼ�� */
    const char **pc;       /* �������ָ�� */

    pc = color;            /* ����ָ�븳ֵ */
    printf("%x\t%x\n", color, pc);

    for (i = 0; i < 5; i++) {
        printf("%x %s %c\t", color[i], color[i], *color[i]);
        printf("%x %s %c\n", *(pc + i), *(pc + i), **(pc + i));
    }

    for (i = 0; i < 5; i++) {
        printf("%x %s %c\t", color[i] + 1, color[i] + 1, *color[i] + 1);
        printf("%x %s %c\n", *(pc + i) + 1, *(pc + i) + 1, **(pc + i) + 1);
    }

    return 0;
}