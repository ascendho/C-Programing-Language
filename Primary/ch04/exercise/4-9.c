# include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = 2 * (n / 2 + 1 - i); j > 0; j--) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= 2 * i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * (n / 2 + 1 - i) - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}