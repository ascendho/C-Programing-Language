#include <stdio.h>

int fib(int n);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
    if (n < 3)
        return 1;

    else {
        int a1 = 1, a2 = 1, sum;
        for (int i = 3; i <= n; i++) {
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;
        }

        return sum;
    }
}