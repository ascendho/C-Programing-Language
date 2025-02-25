#include <stdio.h>

int main() {
    double speed, limit;

    scanf("%lf%lf", &speed, &limit);

    if (speed >= 15 * limit / 10) {
        printf("Exceed %.0lf%%. License Revoked", (speed / limit - 1) * 100);
    } else if (speed >= 11 * limit / 10) {
        printf("Exceed %.0lf%%. Ticket 200", (speed / limit - 1) * 100);
    } else
        printf("OK");

    return 0;
}