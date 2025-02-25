#include <stdio.h>

void matrix(int length, int width, char ch);

int main() {
    int length, width;
    char ch;

    scanf("%d %d %c", &length, &width, &ch);
    matrix(length, width, ch);

    return 0;
}

/* 请在这里填写答案 */
void matrix(int length, int width, char ch) {
    for (int i = 0; i < width; i++)
        for (int j = 0; j < length; j++) {
            printf("%c", ch);
            if (length - 1 == j && i != width - 1)
                printf("\n");
        }
}