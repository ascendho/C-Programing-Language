#include<stdio.h>

#define MAX_Length 20

int main() {
    int arr[MAX_Length];

    int index = -1, N, target, element;
    scanf("%d%d", &N, &target);

    for (int i = 0; i < N; i++) {
        scanf("%d", &element);
        arr[i] = element;

        if (element == target) {
            index = i;
        }
    }

    if (index != -1)
        printf("%d", index);
    else
        printf("Not Found");

    return 0;
}