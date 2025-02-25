#include <stdio.h>

int fib(int n);

int isFib(int n);

void PrintFN(int m, int n);

int main() {
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int isFib(int n) {
    for (int i = 1; fib(i) <= n; i++) {
        if (fib(i) == n)
            return 1;
    }

    return 0;
}

int fib(int n) {
    if (1 == n || 2 == n)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

void PrintFN(int m, int n) {
    int flag = 0;
    if (1 == m)
        printf("1 ");

    for (int i = m; i <= n; i++) {
        if (isFib(i)) {
            if (!flag) {
                flag = 1;
                printf("%d", i);

            } else
                printf(" %d", i);
        }
    }

    if (!flag)
        printf("No Fibonacci number");
}