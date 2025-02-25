#include <stdio.h>

int main() {
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);

    printf("%d + %d = %d\n",A,B,A+B);
    printf("%d - %d = %d\n",A,B,A-B);
    printf("%d * %d = %d\n",A,B,A*B);
    printf("%d / %d = %d",A,B,A/B);

    return 0;
}