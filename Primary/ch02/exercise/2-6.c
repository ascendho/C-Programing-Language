#include <stdio.h>

double fact(int n);

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += fact(i);

    printf("%d", sum);

    return 0;
}


double fact(int n) {
    double ans = 1;
    for (int i = n; i >= 1; i--)
        ans *= i;

    return ans;
}