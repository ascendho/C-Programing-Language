/*【例8-9】 找最小的字符串。
 * 输入n个字符串，输出其中最小的字符串。*/

/* 程序B—对比：处理数 */
#include <stdio.h>

int main() {
    int i, n;
    int x, min;

    scanf("%d", &n);
    scanf("%d", &x);

    min = x;

    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }

    printf("min is %d\n", min);

    return 0;
}