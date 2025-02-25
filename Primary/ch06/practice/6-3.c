#include <stdio.h>

int main() {
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A') + 1;

            // 加密后范围超过了Z
            if (ch > 'Z')
                ch = 'A';

        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A') + 1;

            // 加密后范围超过了z
            if (ch > 'z')
                ch = 'a';
        }

        putchar(ch);
    }

    return 0;
}