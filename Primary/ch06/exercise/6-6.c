#include <stdio.h>

int reverse(int number);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number) {
    int ret = 0;

    while (number != 0) {
        ret = ret * 10 + number % 10;
        number /= 10;
    }

    return ret;
}