#include <stdio.h>

void printStar(int count);

void printBlank(int count);

int main() {
    for (int i = 4; i > 0; i--) {
        printBlank(4 - i);
        printStar(i);
    }
    return 0;
}

void printStar(int count) {
    int flag = (count == 1);
    for (int i = count; i > 0; i--) {
        if (i != 1)
            printf("* ");
        else
            printf("*");
    }
    if (flag != 1)
        printf("\n");
}

void printBlank(int count) {
    for (int i = count; i > 0; i--)
        printf(" ");
}