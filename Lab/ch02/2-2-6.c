#include<stdio.h>

void shareCandy(int *x, int *y, int *z, int N);

int main() {
    int a = 8, b = 9, c = 10;
    int N = 3;

    shareCandy(&a, &b, &c, N);
    shareCandy(&b, &a, &c, N);
    shareCandy(&c, &a, &b, N);


    printf("%d %d %d", a, b, c);

    return 0;
}

void shareCandy(int *x, int *y, int *z, int N) {
    *x = *x / N;
    *y += *x;
    *z += *x;
}