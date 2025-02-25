#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        printf("These sides do not correspond to a valid triangle");

    else {
        double p = a + b + c;
        double area = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
        printf("area = %.2lf; perimeter = %.2lf", area, p);
    }

    return 0;
}