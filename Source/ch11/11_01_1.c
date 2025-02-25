/*【例11-1】 一个单词表存放了五个表示颜色的英文单词，输入一个字母，
 * 在单词表中查找并输出所有以此字母开头的单词，若没有找到，输出Not Found。*/

/* 单词索引（用指针数组实现）*/
#include<stdio.h>

int main() {
    int i, flag = 0;
    char ch;
    const char *color[5] = {"red", "blue", "yellow", "green", "black"};         /* 第7行*/

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