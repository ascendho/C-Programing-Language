#include <stdio.h>

#define MAXS 15

void StringCount(char s[]);

void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char s[]) {
    int Letter = 0, Blank = 0, Digit = 0, Others = 0;
    int i = 0;

    while ('\0' != s[i]) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            Letter++;
        else if (s[i] >= '0' && s[i] <= '9')
            Digit++;
        else if (s[i] == '\n' || s[i] == ' ')
            Blank++;
        else
            Others++;

        i++;

    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", Letter, Blank, Digit, Others);
}