#include <stdio.h>

int main() {
    int n, m;
    int a[6][6], b[6][6];
    scanf("%d%d", &m, &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    m = m % n;
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++)
            b[i][(j + m) % n] = a[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", b[i][j]);

        if (i != n - 1)
            putchar('\n');
    }

    return 0;
}