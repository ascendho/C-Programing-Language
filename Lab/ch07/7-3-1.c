#include<stdio.h>

#define LENGTH 81

int main() {
    char str[LENGTH];
    gets(str);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
        length++;

    for (int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}