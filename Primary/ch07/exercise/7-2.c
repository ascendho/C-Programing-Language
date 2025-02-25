#include<stdio.h>

void countNumber(int count[], int number);

int main() {
    int N;
    scanf("%d", &N);

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int number;
    for (int i = 0; i < N; i++) {
        scanf("%d", &number);
        countNumber(count, number);
    }

    int max = count[0];

    for (int i = 1; i < 10; i++) {
        if (count[i] > max)
            max = count[i];

    }

    printf("%d:", max);

    for (int i = 0; i < 10; i++) {
        if (count[i] == max)
            printf(" %d", i);
    }

    printf("\n");

    return 0;
}

void countNumber(int count[], int number) {
    // 首先检查数字是否为0
    if (0 == number) {
        count[0]++;
        return;
    }

    while (number != 0) {
        int remainder = number % 10;
        count[remainder]++;

        number /= 10;
    }
}