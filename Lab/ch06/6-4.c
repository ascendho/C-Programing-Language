#include <stdio.h>

int main() {
    int word = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch == ' ')
            word = 0;

        else if (0 == word) {
            word = 1;

            if (ch >= 'a' && ch <= 'z')
                ch = ch - 'a' + 'A';
        }

        // 空格照样输出
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}