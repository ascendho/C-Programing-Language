#include <stdio.h>
#include <string.h>

int main() {
    char sx[5][80], stemp[80];

    // 输入字符串
    for (int i = 0; i < 5; i++)
        scanf("%s", sx[i]);

    // 选择排序
    for (int i = 0; i < 4; i++) {
        int index = i;
        for (int j = i + 1; j < 5; j++)
            if (strcmp(sx[j], sx[index]) < 0)
                index = j;

        strcpy(stemp, sx[i]);
        strcpy(sx[i], sx[index]);
        strcpy(sx[index], stemp);
    }

    printf("After sorted:\n");

    for (int i = 0; i < 5; i++)
        puts(sx[i]);

    return 0;
}