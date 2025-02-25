#include <stdio.h>
#include <string.h>

#define LEN 81

int main() {
    int N;

    scanf("%d", &N);

    // 吞掉回车键
    getchar();

    char str[LEN], Min[LEN];
    gets(Min);

    for (int i = 1; i < N; i++) {
        gets(str);

        if (strcmp(Min, str) > 0)
            strcpy(Min, str);
    }

    printf("Min is: %s\n", Min);

    return 0;
}