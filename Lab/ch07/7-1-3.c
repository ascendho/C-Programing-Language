#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int max = INT_MIN, index = -1, item;

    for (int i = 0; i < n; i++) {
        scanf("%d", &item);

        if (item > max) {
            max = item;
            index = i;
        }
    }

    printf("%d %d\n", max, index);

    return 0;
}