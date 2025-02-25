/*【例11-4】将5个字符串从小到大排序后输出。*/

/* 程序A */
#include <stdio.h>
#include <string.h>

void fsort(const char *color[], int n);

int main() {
    int i;
    const char *pcolor[5] = {"red", "blue", "yellow", "green", "black"};

    fsort(pcolor, 5);   /* 调用函数 */

    for (i = 0; i < 5; i++) {
        printf("%s ", pcolor[i]);
    }

    return 0;
}

void fsort(const char *color[], int n) {
    int k, j;
    const char *temp;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {
            if (strcmp(color[j], color[j + 1]) > 0) {
                temp = color[j];
                color[j] = color[j + 1];
                color[j + 1] = temp;
            }
        }
    }
}