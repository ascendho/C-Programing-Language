#include <stdio.h>
#include <string.h>

#define N 5

int main() {
    char sx[N][80], stemp[80];

    // 输入字符串
    for (int i = 0; i < N; i++)
        scanf("%s", sx[i]);

    // 选择排序
    for (int i = 0; i < N-1; i++) {
        int index = i;
        for (int j = i + 1; j < N; j++)
            if (strcmp(sx[j], sx[index]) < 0)
                index = j;

        strcpy(stemp, sx[i]);
        strcpy(sx[i], sx[index]);
        strcpy(sx[index], stemp);
    }

    printf("After sorted:\n");

    for (int i = 0; i < N; i++)
        puts(sx[i]);

    return 0;
}