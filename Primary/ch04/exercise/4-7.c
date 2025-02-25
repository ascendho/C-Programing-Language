# include <stdio.h>

int gcd(int m, int n);

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    printf("%d %d", gcd(M, N), M * N / gcd(M, N));

    return 0;
}

int gcd(int m, int n) {
    int r, temp;

    // 若m<n，置换过来
    if (m < n) {
        temp = m;
        m = n;
        n = temp;
    }

    // r为余数
    r = m % n;

    // 余数不为0
    while (r != 0) {
        // m替换成n
        m = n;

        // n替换成余数
        n = r;

        // 继续做模运算
        r = m % n;
    }

    return n;
}