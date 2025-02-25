#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0;
    int flag = 1;
    for (int i = 1; i <= N; i++) {
        sum += flag * 1.0 / (3 * i - 2);
        flag = -flag;
    }

    printf("sum = %.3lf", sum);
    return 0;
}