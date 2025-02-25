#include <stdio.h>

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number) {
    int digit, sum = 0, temp = number, count = 0, term = 1;

    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    temp = number;

    while (temp != 0) {
        digit = temp % 10;
        temp = temp / 10;

        for (int i = 0; i < count; i++)
            term *= digit;
        sum += term;
        term = 1;
    }

    return sum == number;
}

void PrintN(int m, int n) {
    for (int i = m + 1; i < n; i++) {
        if (narcissistic(i))
            printf("%d\n", i);
    }
}