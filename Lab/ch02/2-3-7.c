#include <stdio.h>

int main() {
    int power;
    scanf("%d", &power);

    double cost = 0;

    if (power < 0) {
        printf("Invalid Value!");
        return 0;
    } else if (power <= 50)
        cost = power * 0.53;
    else
        cost = 50 * 0.53 + (power - 50) * 0.58;

    printf("cost = %.2lf", cost);

    return 0;
}