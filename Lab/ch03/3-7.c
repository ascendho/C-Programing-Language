#include <stdio.h>

int main() {
    int N, A = 0, B = 0, C = 0, D = 0, E = 0;
    double grade;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf", &grade);

        if (grade >= 90) A++;
        else if (grade >= 80) B++;
        else if (grade >= 70) C++;
        else if (grade >= 60) D++;
        else E++;

    }

    printf("%d %d %d %d %d", A, B, C, D, E);

    return 0;
}