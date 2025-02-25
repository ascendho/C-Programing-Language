#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 1;
    for (int i = 1; i <= N; i++)
        sum *= i;

    printf("%d", sum);

    return 0;
}