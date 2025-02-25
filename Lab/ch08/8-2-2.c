#include <stdio.h>
#include <string.h>

#define LEN 81

int main() {
    int N;
    scanf("%d", &N);

    // 吞掉回车键
    getchar();

    char str[LEN], longest[LEN];
    gets(longest);

    for (int i = 1; i < N; i++) {
        gets(str);

        if (strlen(str) > strlen(longest))
            strcpy(longest, str);
    }

    printf("The longest is: %s\n", longest);

    return 0;
}