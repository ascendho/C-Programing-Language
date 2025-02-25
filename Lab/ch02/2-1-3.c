#include<stdio.h>

int main() {
    for (int i = 4; i > 0; i--) {
        for (int j = 0; j < i; j++)
            printf("*");

        if (i != 1)
            printf("\n");

    }

    return 0;
}