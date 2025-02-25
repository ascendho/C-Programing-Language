#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    double sum = 0;
    for (int i = m; i <= n; i++) {
        sum += (pow(i, 2) + pow(i, -1));
    }

    printf("sum = %.6lf",sum);
    return 0;
}