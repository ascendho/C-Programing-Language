#include <stdio.h>

double fact(int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    double result = fact(n) / (fact(m) * fact(n - m));

    printf("result = %.0lf", result);


    return 0;
}

double fact(int n) {
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}