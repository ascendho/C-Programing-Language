#include <stdio.h>

int main() {
    int lower, upper;
    scanf("%d", &lower);
    scanf("%d", &upper);

    if (lower > upper)
        printf("Invalid.");
    else {
        printf("fahr celsius\n");

        for (int i = lower; i <= upper; i += 2) {
            printf("%d%6.1f", i, 5.0 * (i - 32) / 9);

            if (i + 2 <= upper)
                printf("\n");
        }
    }

    return 0;
}