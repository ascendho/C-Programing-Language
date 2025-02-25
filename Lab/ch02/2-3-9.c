#include<stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 100 || N > 999) {
        printf("Invalid Value.");
        return 0;
    }


    int hundredBit = N / 100;
    int tenBit = N / 10 % 10;
    int bit = N % 10;

    if (N == pow(hundredBit, 3) + pow(tenBit, 3) + pow(bit, 3))
        printf("Yes");
    else
        printf("No");

    return 0;
}