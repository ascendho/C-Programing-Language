#include <stdio.h>

#define CAPACITY 10

void sort(int arr[], int size);

int main() {
    int n;
    scanf("%d", &n);

    int a[CAPACITY];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", a[i]);
        else
            printf("%d ", a[i]);

    }

    return 0;
}

void sort(int arr[], int size) {
    int index, temp;

    for (int k = 0; k < size - 1; k++) {
        index = k;

        for (int i = k + 1; i < size; i++)
            if (arr[i] > arr[index])
                index = i;

        temp = arr[index];
        arr[index] = arr[k];
        arr[k] = temp;
    }
}