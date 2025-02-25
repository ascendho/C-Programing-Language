#include <stdio.h>
#include <math.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%d + %d = %d\n"
           "%d - %d = %d\n"
           "%d * %d = %d\n"
           "%d / %d = %d\n"
           "%d %% %d = %d", A, B, A + B, A, B, A - B, A, B, A * B, A, B, A / B, A, B, A % B);


    return 0;
}