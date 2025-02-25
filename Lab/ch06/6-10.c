#include <stdio.h>

int main() {
    int count = 0, flag = 1;
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            count++;
            flag = 0;

        } else {
            if (count != 0) {
                printf("%d ", count);
                count = 0;
            }
        }
    }

    // 最后出现的空格
    if (count != 0) {
        printf("%d ", count);
    }

    // 全空格的情况
    if (flag) {
        printf("0 ");
    }

    return 0;
}