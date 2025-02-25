#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int hours, minutes;

    hours = end / 100 - start / 100;
    minutes = end % 100 - start % 100;

    if (minutes < 0) {
        hours -= 1;
        minutes += 60;
    }

    printf("%02d:%02d", hours, minutes);

    return 0;
}