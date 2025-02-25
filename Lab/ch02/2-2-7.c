#include<stdio.h>

int main() {
    int n = 152;

    int hundredBit = n / 100;
    int tenBit = n / 10 % 10;
    int bit = n % 10;

    printf("152 = %d + %d*10 + %d*100", bit, tenBit, hundredBit);


    return 0;
}