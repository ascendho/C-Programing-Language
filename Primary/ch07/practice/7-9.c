#include<stdio.h>

int main() {
    int tab[2][13] = {
            0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
            0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
    };

    char str[11];
    gets(str);

    int year = 0, month = 0, day = 0;

    int i;

    for (i = 0; str[i] != '/'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            year = year * 10 + str[i] - '0';

    // 进入for循环首先执行i++是为了跳过上一个'/'
    for (i++; str[i] != '/'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            month = month * 10 + str[i] - '0';

    for (i++; str[i] != '\0'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            day = day * 10 + str[i] - '0';

    int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int days = day;
    for (int j = 1; j < month; j++)
        days += tab[leap][j];

    printf("%d", days);

    return 0;
} 