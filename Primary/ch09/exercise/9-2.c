#include <stdio.h>

struct complex {
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main() {
    struct complex product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product = multiply(x, y);
    printf("(%d+%di) * (%d+%di) = %d + %di\n",
           x.real, x.imag, y.real, y.imag, product.real, product.imag);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct complex multiply(struct complex x, struct complex y) {
    struct complex ret;

    ret.real = x.real * y.real - x.imag * y.imag;
    ret.imag = x.real * y.imag + x.imag * y.real;

    return ret;
}