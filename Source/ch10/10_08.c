/*【例10-6】简单的带参数的宏定义。*/

#include <stdio.h>

#define  MAX(a, b)  a > b ? a: b
#define  SQR(x)  x * x

int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    x = MAX (x, y);            /* 引用宏定义 */
    y = SQR(x);                /* 引用宏定义 */
    printf("%d  %d\n", x, y);

    return 0;
}