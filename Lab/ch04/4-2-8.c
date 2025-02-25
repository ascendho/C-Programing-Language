#include <stdio.h>
#include <math.h>

int prime(int p);

void Goldbach(int n);

int main() {
    int N;
    scanf("%d", &N);

    Goldbach(N);

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
            printf("%d = %d + %d", n, i, j);
            return;
        }
    }
}