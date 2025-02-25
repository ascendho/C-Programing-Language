#include <stdio.h>

int CountDigit(int number, int digit);

int main() {
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit) {
    int count = 0;

    if (number < 0)
        number = -number;

    if (0 == number && 0 == digit)
        count++;

    int item = number % 10;
    number /= 10;

    while (0 != number || 0 != item) {
        if (item == digit)
            count++;

        item = number % 10;
        number /= 10;
    }

    return count;
}