#include <stdio.h>

int main() {
    int N;;
    scanf("%d", &N);

    int grade, excellence = 0, pass = 0, fail = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &grade);

        if (grade >= 85)
            excellence++;
        else if (grade >= 60)
            pass++;
        else
            fail++;
    }

    printf("%d %d %d", excellence, pass, fail);

    return 0;
}