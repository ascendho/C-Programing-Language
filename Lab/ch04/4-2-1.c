#include<stdio.h>

double fact(int N);

int main() {
    int n;
    scanf("%d", &n);

    double estimate = 1;

    for (int i = 1; i <= n; i++)
        estimate += 1 / fact(i);

    printf("%.8f", estimate);

    return 0;
}

double fact(int N) {
    double sum = 1;

    for (int i = 1; i <= N; i++)
        sum *= i;

    return sum;
}