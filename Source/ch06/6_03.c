/*����6-3���߼����ʽ������ */

/* �߼�����ʾ�� */
#include <stdio.h>

int main() {
    char ch = 'w';
    int a = 2, b = 0, c = 0;
    float x = 3.0;

    printf("%d ", a && b);
    printf("%d ", a || b && c);
    printf("%d ", !a && b);
    printf("%d ", a || 3 + 10 && 2);
    printf("%d ", !(x == 2));
    printf("%d ", !x == 2);
    printf("%d\n ", ch || b);

    return 0;
}