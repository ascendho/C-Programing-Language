#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    getchar();  // 吞掉换行符,很关键

    char ch;
    int letter = 0, blank = 0, digit = 0, other = 0;

    for (int i = 0; i < N; i++) {
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