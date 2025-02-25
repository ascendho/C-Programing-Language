#include<stdio.h>

int main() {
    char str[81];       // 80不能满分通过
    gets(str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'
            && str[i] >= 65 && str[i] <= 90)
            count++;
    }

    printf("%d", count);

    return 0;
}