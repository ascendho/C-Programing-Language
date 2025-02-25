#include <stdio.h>

#define BYTENUMBER 4
#define BITS 8

int main() {
    for (int i = 0; i < BYTENUMBER; i++) {
        int x = 0;
        for (int j = 0; j < BITS; j++)
            x = (x << 1) | (getchar() - '0');

        if (i)
            printf(".");

        printf("%d", x);
    }

    printf("\n");

    return 0;
}