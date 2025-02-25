#include <stdio.h>

#define MAXN 10

int FindArrayMax(int a[], int n);

int main() {
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", FindArrayMax(a, n));

    return 0;
}

/* 请在这里填写答案 */
int FindArrayMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}