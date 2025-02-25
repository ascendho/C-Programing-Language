/*【例6-2】关系表达式的运用 */

/*  关系运算示例 */
#include <stdio.h>

int main() {
    char ch = 'w';
    int a = 2, b = 3, c = 1, d, x = 10;

    printf("%d ", a > b == c);
    printf("%d ", d = a > b);
    printf("%d ", ch > 'a' + 1);
    printf("%d ", d = a + b > c);
    printf("%d ", b - 1 == a != c);
    printf("%d\n", 3 <= x <= 5);

    return 0;
}