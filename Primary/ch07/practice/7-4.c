
#include<stdio.h>

#define CAPACITY 20

void input(int arr[], int *size);

int isInArr(int arr[], int size, int item);

int main() {
    int a[CAPACITY], b[CAPACITY];
    int aSize, bSize;

    scanf("%d", &aSize);
    input(a, &aSize);

    scanf("%d", &bSize);
    input(b, &bSize);

    int c[CAPACITY];
    int index = 0;

    for (int i = 0; i < aSize; i++)
        if (!isInArr(b, bSize, a[i])) {
            c[index] = a[i];
            index++;
        }

    for (int i = 0; i < bSize; i++)
        if (!isInArr(a, aSize, b[i])) {
            c[index] = b[i];
            index++;
        }

    for (int i = 0; i < index; i++) {
        if (i == index - 1)
            printf("%d", c[i]);
        else
            printf("%d ", c[i]);
    }

    return 0;
}

void input(int arr[], int *size) {
    scanf("%d", &arr[0]);

    for (int i = 1; i < *size;) {
        scanf("%d", &arr[i]);
        int flag = 0;

        for (int j = 0; j < i; j++)
            if (arr[i] == arr[j]) {
                flag = 1;
                (*size)--;
                break;
            }

        if (!flag)
            i++;
    }
}


int isInArr(int arr[], int size, int item) {
    for (int i = 0; i < size; i++) {
        if (item == arr[i])
            return 1;
    }

    return 0;
}