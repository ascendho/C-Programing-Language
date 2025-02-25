#include<stdio.h>

int isNarcissus(int number, int N);

int main() {
    int N;
    scanf("%d", &N);

    int start = 1, end = 1;;

    // 得到起始数字
    for (int i = 0; i < N - 1; i++)
        start *= 10;

    // 得到终止数字
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
        // 得到个位数字
        item = number % 10;

        // 更新number
        number /= 10;

        // 暂存个位数字
        int temp = item;

        // N次方
        for (int j = 1; j < N; j++) {
            item *= temp;
        }

        // 减去该位数的N次方
        Num -= item;
    }

    if (0 == Num)
        return 1;

    return 0;
}