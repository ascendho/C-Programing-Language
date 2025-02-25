#include <stdio.h>

int main() {
    char ch;
    int length = 10, letter = 0, blank = 0, digit = 0, other = 0;

    for (int i = 0; i < length; i++) {
        scanf("%c", &ch);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            letter++;
        else if (ch == ' ' || ch == '\n')
            blank++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            other++;

    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);

    return 0;
}