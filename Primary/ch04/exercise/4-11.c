#include <stdio.h>

/* 此题本质上是考查斐波那契数列 */

int main() {
    int N;
    scanf("%d", &N);

    int month = 1, n1 = 1, n2 = 0, n3 = 0;

    while ((n1 + n2 + n3) < N) {
        month++;
        n3 = n3 + n2;
        n2 = n1;
        n1 = n3;
    }

    printf("%d\n", month);

    return 0;
}