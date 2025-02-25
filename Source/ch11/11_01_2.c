/* 指针数组讨论 */

#include<stdio.h>
#include<string.h>

int main() {
    int i;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"};  /* ָ�������ʼ�� */

    printf("%x\n", color);

    for (i = 0; i < 5; i++) {
        printf("%x %s %c\n", color[i], color[i], *color[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%x %s %c\n", color[i] + 1, color[i] + 1, *color[i] + 1);
    }

    return 0;
}