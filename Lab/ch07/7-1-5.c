#include<stdio.h>

#define MAX_Length 10

void swap(int arr[], int i, int j);

int main() {
    int arr[MAX_Length];

    int N;
    scanf("%d", &N);

    int max = 0, min = 0, item;

    for (int i = 0; i < N; i++) {
        scanf("%d", &item);
        arr[i] = item;

        if (i != 0) {
            if (item > arr[max])
                max = i;
            else if (item < arr[min])
                min = i;
        }
    }

    swap(arr, min, 0);

    if (max != 0)
        swap(arr, max, N - 1);
    else
        swap(arr, min, N - 1);

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}