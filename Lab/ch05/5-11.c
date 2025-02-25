#include <stdio.h>

void hollowPyramid(int n);

int main() {
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        printf("%d", i);

        if (i < n) {
            for (j = 1; j <= 2 * (i - 1) - 1; j++)
                printf(" ");
        } else {
            for (j = 1; j <= 2 * (i - 1) - 1; j++)
                printf("%d", i);
        }

        if (i > 1)
            printf("%d", i);

        putchar('\n');
    }
}