#include<stdio.h>

int main() {
    char target;
    scanf("%c", &target);

    getchar();

    char str[81];
    gets(str);

    int index = -1;;

    for (int i = 0; str[i] != '\0'; i++)
        if (target == str[i])
            index = i;

    if (index != -1)
        printf("index = %d", index);
    else
        printf("Not Found");

    return 0;
} 