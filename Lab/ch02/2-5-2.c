#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %.0f", i, pow(3, i));

        if (i != n)
            printf("\n");
    }


    return 0;
}