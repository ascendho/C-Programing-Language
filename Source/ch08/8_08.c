/* 【例8-8】输入一个长度小于80的字符串，按规则对字符串进行压缩，输出压缩后的字符串。
 * 压缩规则是：如果某个字符x连续出现n（n>1）个，则将这n个字符替换为"nx"的形式；否则保持不变。 */

/* 字符串压缩 */
#include <stdio.h>

#define MAXLINE 80

void zip(char *p);

int main() {
    char line[MAXLINE];

    printf("Input the string: ");
    gets(line);

    zip(line);

    puts(line);

    return 0;
}

void zip(char *p) {
    char *q = p;
    int n;

    while (*p != '\0') {
        n = 1;

        /* 统计连续重复字符个数 */
        while (*p == *(p + n)) {
            n++;
        }

        /* 将n转换为字符 */
        if (n >= 10) {
            *q++ = (n / 10) + '0';
            *q++ = (n % 10) + '0';
        } else if (n >= 2) {
            *q++ = n + '0';
        }

        *q++ = *(p + n - 1);         /* 复制重复字符 */
        p = p + n;                   /* 指针p移动至下一个新字符 */
    }

    *q = '\0';                       /* 重置字符串结束标志 */
}