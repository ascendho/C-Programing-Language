#include <stdio.h>

int main() {
    double mileAge, fee = 10;
    int waitingTime;

    scanf("%lf%d", &mileAge, &waitingTime);

    if (mileAge <= 3);
    else if (mileAge <= 10) {
        fee += (mileAge - 3) * 2;
    } else
        fee += (10 - 3) * 2 + (mileAge - 10) * 3;

    if (waitingTime >= 5)
        fee += (waitingTime / 5) * 2;

    printf("%.0lf", fee);

    return 0;
}