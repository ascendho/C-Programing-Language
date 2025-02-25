#include <stdio.h>
#include <math.h>

int countBits(int N);

int main() {
    int number;
    scanf("%d", &number);

    int bits = countBits(number);

    for (int i = bits - 1; i >= 0; i--) {
        int item = number / (int) pow(10, i);
        printf("%d ", item);
        number = number % (int) pow(10, i);
    }

    return 0;
}

int countBits(int N) {
    int count = 0;

    do {
        count++;
        N /= 10;
    } while (N != 0);

    return count;
}