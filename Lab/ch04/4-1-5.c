#include<stdio.h>
#include<math.h>

int isPrime(int n);

int main() {
    int M, N;
    int count = 0, sum = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    if (M >= 1 && N >= M && N <= 500) {
        for (int i = M; i <= N; i++) {
            if (isPrime(i)) {
                count++;
                sum += i;
            }
        }
    }

    printf("%d %d", count, sum);

    return 0;
}

int isPrime(int n) {
    int limit, i;

    if (n <= 1)
        return 0;
    else if (2 == n)
        return 1;
    else {
        limit = sqrt(n) + 1;

        for (i = 2; i <= limit; i++) {
            if (0 == n % i)
                break;
        }
    }

    if (i > limit)
        return 1;

    return 0;
}