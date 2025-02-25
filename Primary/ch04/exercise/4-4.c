#include<stdio.h>
#include<math.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    int sum = 0, term = 0;

    for (int i = 0; i < n; i++) {
        term += a * pow(10, i);
        sum += term;
    }

    printf("s = %d", sum);

    return 0;
}