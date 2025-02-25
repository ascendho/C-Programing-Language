#include <stdio.h>

int main() {
    int word = 0;
    char ch;

    // 连续获取字符直到回车键
    while ((ch = getchar()) != '\n') {
        // 遇到空格，说明新单词要来了
        if (ch == ' ')
            word = 0;

            // 不是空格，说明是单词的一部分
        else if (0 == word) {
            word = 1;

            // 首字符为小写字母，转为大写
            if (ch >= 'a' && ch <= 'z')
                // 小写转大写
                ch = ch - 'a' + 'A';
        }

        // 空格照样输出
        printf("%c", ch);
    }

    // 打印换行符
    printf("\n");

    return 0;
}