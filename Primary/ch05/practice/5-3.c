#include <stdio.h>

void CharPyramid(int n, char ch);

// 注: printBlank和printChar为自建的辅助函数
void printBlank(int n);

void printChar(char ch, int n);

int main() {
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

/* 请在这里填写答案 */
void printBlank(int n) {
    for (int i = 0; i < n; i++)
        printf(" ");

}

void printChar(char ch, int n) {
    for (int i = 0; i < n; i++)
        printf("%c ", ch);
}

void CharPyramid(int n, char ch) {

    for (int i = 1; i <= n; i++) {
        printBlank(n - i);
        printChar(ch, i);

        if (i != n)
            printf("\n");
    }
}