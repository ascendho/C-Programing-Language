#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int min = INT_MAX;
    int number;

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);

        if (number < min)
            min = number;
    }

    printf("min = %d", min);

    return 0;
}