#include <stdio.h>

int MonthDays(int year, int month);

int main() {
    int ndays, month, year;

    scanf("%d", &year);
    for (month = 1; month <= 12; month++) {
        ndays = MonthDays(year, month);
        printf("%d ", ndays);
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int MonthDays(int year, int month) {
    int items[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || 0 == year % 400)
        items[1] = 29;

    return items[month - 1];
}