#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[]); /* 实现细节在此不表 */

int main() {
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void Shift(char s[]) {
    char str[4];
    int i = 0;

    // 存储前3个字符
    for (; i < 3; i++)
        str[i] = s[i];

    // 补上'\0'
    str[i] = '\0';

    // 将后面的字符前移
    for (i = 3; s[i] != '\0'; i++)
        s[i - 3] = s[i];

    // 补上'\0'
    s[i - 3] = '\0';


    // 将str附加到s后面
    strcat(s, str);
}