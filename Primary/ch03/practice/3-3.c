#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0, grade, average;
    int count = 0;

    if (N > 0) {
        for (int i = 0; i < N; i++) {
            scanf("%lf", &grade);
            sum += grade;

            if (grade >= 60)
                count++;
        }
        average = sum / N;

    } else {
        average = 0.0;
    }

    printf("average = %.1lf\n"
           "count = %d", average, count);

    return 0;
}