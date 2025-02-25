#include<stdio.h>

int main() {
    int x = 3;
    int y = x * x;

    printf("%d = %d * %d\n", y, x, x);
    printf("%d * %d = %d\n", x, x, y);

    return 0;
}