#include<stdio.h>

int main() {
    char str[81];
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + 'Z' - str[i];
        }
    }

    puts(str);

    return 0;
} 