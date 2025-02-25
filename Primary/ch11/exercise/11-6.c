#include <stdio.h>
#include <string.h>

#define MAXS 30

char *search(char *s, char *t);

void ReadString(char s[]); /* 裁判提供，细节不表 */

int main() {
    char s[MAXS], t[MAXS], *pos;

    gets(s);
    gets(t);
//    ReadString(s);
//    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t) {
    int i, j;

    for (i = 0; i <= strlen(s); i++) {
        for (j = 0; j < strlen(t); j++)
            if (*(s + i + j) != *(t + j)) break;

        if (j == strlen(t))
            return s + i;
    }

    return NULL;
}