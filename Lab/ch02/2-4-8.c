#include <stdio.h>
#include <math.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    if (M < 100 || N > 999 || M > N) {
        printf("Invalid Value.\n");
        return 0;
    } else
        for (int i = M; i <= N; i++) {
            int hundredBit = i / 100;
            int tenBit = i % 100 / 10;
            int bit = i % 10;

            if (i == pow(hundredBit, 3) + pow(tenBit, 3) + pow(bit, 3))
                printf("%d\n", i);

        }

    return 0;
}