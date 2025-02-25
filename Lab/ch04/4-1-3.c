#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0, sum = 0;

    while (0 != N) {
        count++;
        sum += (N % 10);

        N /= 10;
    }

    printf("%d %d", count, sum);

    return 0;
}