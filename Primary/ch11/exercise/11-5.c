#include <stdio.h>
#include <string.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main() {
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match(char *s, char ch1, char ch2) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ch1) {
            for (int j = i; j < strlen(s); j++) {
                printf("%c", s[j]);
                if (s[j] == ch2)
                    break;
            }

            printf("\n");
            // 返回ch1的地址
            return (s + i);
        }
    }

    printf("\n");

    // 注意没找到ch1的情况下返回最后的‘\0’的地址
    return s + strlen(s);
}