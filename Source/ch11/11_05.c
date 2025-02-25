/*【例11-5】 解密英文藏头诗。所谓藏头诗就是将一首诗每一句的第一个字连起来，所组成的内容就是该诗的隐含信息。
 * 编写程序，输入一首英文藏头诗，解密藏头诗并输出其隐含信息。
   输入的藏头诗小于20行，每行不超过80个字符，以#作为输入结束标志，使用动态内存分配方法处理字符串的输入。*/

/* 英文藏头诗（使用指针数组、动态内存分配）*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int i, n = 0;
    char *poem[20], str[80], mean[20];

    gets(str);

    while (str[0] != '#') {
        poem[n] = (char *) malloc(sizeof(char) * (strlen(str) + 1));  /* 动态分配 */
        strcpy(poem[n], str);       /* 将输入的字符串赋值给动态内存单元 */
        n++;
        gets(str);
    }

    for (i = 0; i < n; i++) {
        mean[i] = *poem[i];                /* 每行取第一个字符 */
        free(poem[i]);             /* 释放动态内存单元 */
    }

    mean[i] = '\0';

    puts(mean);

    return 0;
}