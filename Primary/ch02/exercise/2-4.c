#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0;
    int flag = 1;

    for (int i = 1; i <= N; i++) {
        sum += flag * i / (2.0 * i - 1);
        flag = -flag;
    }

    printf("%.3lf", sum);

    return 0;
}