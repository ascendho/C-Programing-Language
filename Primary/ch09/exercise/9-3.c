#include <stdio.h>

struct vector {
    double x;
    double y;
};

int main(void) {
    struct vector v, v1, v2;
    scanf("%lf%lf%lf%lf", &v1.x, &v1.y, &v2.x, &v2.y);

    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;

    if (v.x > 0)
        v.x = (int) ((v.x + 0.05) * 10);
    else
        v.x = (int) ((v.x - 0.05) * 10);
    v.x = v.x / 10.0;
    if (v.y > 0)
        v.y = (int) ((v.y + 0.05) * 10);
    else
        v.y = (int) ((v.y - 0.05) * 10);

    v.y = v.y / 10.0;

    printf("(%.1f, %.1f)\n", v.x, v.y);

    return 0;
}