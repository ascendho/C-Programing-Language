#include <stdio.h>
#include <math.h>

int prime(int p);

int PrimeSum(int m, int n);

int main() {
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++) {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

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
                break;
        }
    }

    if (i > limit)
        return 1;

    return 0;
}

int PrimeSum(int m, int n) {
    int sum = 0;

    for (int i = m; i <= n; i++) {
        if (prime(i)) {
            sum += i;
        }
    }

    return sum;
}