#include <stdio.h>

#define MAXN 10

void f(long int x, char *p);

int main() {
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void f(long int x, char *p) {
    int i = 0, j;
    unsigned long int y;

    // 要先检查x是否为0
    if (x == 0) {
        p[0] = '0';
        p[1] = '\0';
        return;
    }

    // x不为0时
    if (x < 0) {
        // 存储负号
        *(p++) = '-';
        y = -x;
    } else
        y = x;

    // 直到y为0
    while (y) {
        int t = y % 16;
        p[i++] = t < 10 ? '0' + t : 'A' + t - 10;
        y /= 16;
    }

    // 填充'\0'
    p[i] = '\0';

    // p存储的字符是逆序的，所以要倒装回来
    for (j = 0, i = i - 1; j < i; j++, i--) {
        char t = p[j];
        p[j] = p[i];
        p[i] = t;
    }
}