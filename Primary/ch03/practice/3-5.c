#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    int flag = 0;

    if (year > 2000 && year <= 2100) {
        for (int i = 2001; i <= year; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                flag = 1;
                printf("%d\n", i);
            }
        }

        if (0 == flag)
            printf("None");
    } else
        printf("Invalid year!");

    return 0;
}