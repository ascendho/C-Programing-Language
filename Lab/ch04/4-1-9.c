#include <stdio.h>

double fact(int n);

int main(void) {
    int i, n;
    double sum;

    scanf("%d", &n);
    sum = 1;
    for (i = 1; i <= n; i++) {
        sum = sum + 1.0 / fact(i);
    }
    printf("%f\n", sum);

    return 0;
}

/* 请在这里填写答案 */
double fact(int n) {
    double ans = 1;

    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}