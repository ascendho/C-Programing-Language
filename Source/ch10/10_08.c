/*����10-6���򵥵Ĵ������ĺ궨�塣*/

#include <stdio.h>

#define  MAX(a, b)  a > b ? a: b
#define  SQR(x)  x * x

int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    x = MAX (x, y);            /* ���ú궨�� */
    y = SQR(x);                /* ���ú궨�� */
    printf("%d  %d\n", x, y);

    return 0;
}