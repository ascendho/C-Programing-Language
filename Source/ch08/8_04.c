/*����8-4��������ݺ������������Ӧ���ꡢ�¡��ա�
 * Ҫ����͵��ú���month_day(int year, int yearday, int *pmonth, int *pday)
 * ����year���꣬yearday��������pmonth��pdayָ��ı����������ó����º��ա�
*/

/*  ʹ��ָ����Ϊ�����������ض������ֵ��ʾ�� */
# include <stdio.h>

void month_day(int year, int yearday, int *pmonth, int *pday);      /* ���������¡��յĺ���*/

int main() {
    int day, month, year, yearday;                                  /* ��������ա��¡���������ı���*/

    /* ��ʾ�������ݣ�������� */
    printf("input year and yearday: ");
    scanf("%d%d", &year, &yearday);

    /* ���ü����¡��պ���  */
    month_day(year, yearday, &month, &day);

    printf("%d-%d-%d \n", year, month, day);

    return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
    int k, leap;
    int tab[2][13] = {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };  /* ���������ŷ����������ÿ���µ����� */

    /* ���������б�����leap */
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for (k = 1; yearday > tab[leap][k]; k++) {
        yearday -= tab[leap][k];
    }

    *pmonth = k;
    *pday = yearday;
}