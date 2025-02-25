#include<stdio.h>

int isOdd(int n);

int main() {
    int sum = 0, number;

    while (scanf("%d", &number) && number > 0) {
        if (isOdd(number))
            sum += number;
    }

    printf("%d", sum);

    return 0;
}

int isOdd(int n) {
    if (0 != n % 2)
        return 1;

    return 0;
}