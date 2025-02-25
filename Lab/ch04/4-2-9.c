#include<stdio.h>

int isNarcissus(int number, int N);

int main() {
    int N;
    scanf("%d", &N);

    int start = 1, end = 1;;

    for (int i = 0; i < N - 1; i++)
        start *= 10;

    end = start * 10 - 1;

    if (N >= 3 && N <= 7) {
        for (int i = start; i <= end; i++) {
            if (isNarcissus(i, N)) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

int isNarcissus(int number, int N) {
    int item;
    int Num = number;

    for (int i = 0; i < N; i++) {
        item = number % 10;
        number /= 10;

        int temp = item;
        for (int j = 1; j < N; j++) {
            item *= temp;
        }

        Num -= item;
    }

    if (0 == Num)
        return 1;

    return 0;
}