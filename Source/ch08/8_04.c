/*【例8-4】输入年份和天数，输出对应的年、月、日。
 * 要求定义和调用函数month_day(int year, int yearday, int *pmonth, int *pday)
 * 其中year是年，yearday是天数，pmonth和pday指向的变量保存计算得出的月和日。
*/

/*  使用指针作为函数参数返回多个函数值的示例 */
# include <stdio.h>

void month_day(int year, int yearday, int *pmonth, int *pday);      /* 声明计算月、日的函数*/

int main() {
    int day, month, year, yearday;                                  /* 定义代表日、月、年和天数的变量*/

    /* 提示输入数据：年和天数 */
    printf("input year and yearday: ");
    scanf("%d%d", &year, &yearday);

    /* 调用计算月、日函数  */
    month_day(year, yearday, &month, &day);

    printf("%d-%d-%d \n", year, month, day);

    return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
    int k, leap;
    int tab[2][13] = {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };  /* 定义数组存放非闰年和闰年每个月的天数 */

    /* 建立闰年判别条件leap */
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for (k = 1; yearday > tab[leap][k]; k++) {
        yearday -= tab[leap][k];
    }

    *pmonth = k;
    *pday = yearday;
}