#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat(char *s, char *t);

int main() {
    char *p;
    char str1[MAXS + MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *str_cat(char *s, char *t) {
    // 保留目的字符串指针
    char *p = s;

    while (*s != '\0') s++;
    while (*t != '\0') {
        *s = *t;
        s++;
        t++;
    }

    // 在末尾添上'\0'
    *s = '\0';

    return p;
}