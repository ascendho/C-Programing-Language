#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0;
    for (int i = 1; i <= N; i++)
        sum += sqrt(i);

    printf("sum = %.2lf", sum);

    return 0;
}