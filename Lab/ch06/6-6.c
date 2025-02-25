#include <stdio.h>
#include <math.h>

int prime(int p);

void Goldbach(int n);

int main() {
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0) printf("%d is a prime number\n", m);
    if (m < 6) m = 6;
    if (m % 2) m++;
    cnt = 0;
    for (i = m; i <= n; i += 2) {
        Goldbach(i);
        cnt++;
        if (cnt % 5) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p) {
    int i, limit;

    if (p <= 1)
        return 0;
    else if (2 == p)
        return 1;
    else {
        limit = sqrt(p) + 1;

        for (i = 2; i <= limit; i++) {
            if (0 == p % i)
                return 0;
        }
    }

    return 1;
}

void Goldbach(int n) {
    int j;
    for (int i = 2;; i++) {
        if (prime(i))
            j = n - i;

        if (i <= j && prime(j)) {
            printf("%d=%d+%d", n, i, j);
            return;
        }
    }
}