#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans;

    if (n < 0)
        ans = -1;
    else if (0 == n)
        ans = 0;
    else
        ans = 1;

    printf("sign(%d) = %d", n, ans);

    return 0;
}