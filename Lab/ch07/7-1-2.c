#include<stdio.h>

#define MAX_INT 10

int main() {
    int n;
    scanf("%d", &n);

    int arr[MAX_INT];

    int item;
    for (int i = 0; i < n; i++) {
        scanf("%d", &item);
        arr[i] = item;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i != 0)
            printf("%d ", arr[i]);
        else
            printf("%d", arr[i]);
    }

    return 0;
}