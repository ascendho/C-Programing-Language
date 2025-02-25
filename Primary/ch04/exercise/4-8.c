#include<stdio.h>

int main() {
    int h, n;
    scanf("%d%d", &h, &n);

    if (0 == n) {
        printf("0.0 0.0");
        return 0;
    }

    double s = 0, temp = h;

    for (int i = 0; i < n; i++) {
        s += temp;

        if (i == 0)
            temp = h;
        else
            temp /= 2;
    }

    printf("%.1f %.1f", s, temp / 2);

    return 0;
} 