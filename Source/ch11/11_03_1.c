/*【例11-3】使用二级指针方式改写例11-1。
 * 一个单词表存放了五个表示颜色的英文单词，输入一个字母，
 * 在单词表中查找并输出所有以此字母开头的单词，若没有找到，输出Not Found。要求用指针数组和二级指针实现。*/

/* 单词索引（用二级指针操作指针数组）*/

#include<stdio.h>

int main() {
    int i, flag = 0;
    char ch;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"}; /* 指针数组初始化 */
    const char **pc;       /* 定义二级指针 */

    pc = color;            /* 二级指针赋值 */

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