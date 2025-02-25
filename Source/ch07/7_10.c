/* ����7-10�����庯��day_of_year(year, month, day)�����㲢������year����month����day��Ӧ���Ǹ���ĵڼ��졣 */

# include <stdio.h>

/* ����ĳ�����ڶ�Ӧ����ĵڼ��� */
int day_of_year(int year, int month, int day);

int main() {
    int day, month, year;

    printf("Enter year, month, day: ");
    scanf("%d%d%d", &year, &month, &day);

    printf("%d\n", day_of_year(year, month, day));

    return 0;
}

int day_of_year(int year, int month, int day) {
    int k, leap;

    /* �����ʼ������ÿ�µ������������� */
    int tab[2][13] = {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    /* �ж����꣬��year������ʱ��leap=1����year�Ƿ�����ʱ��leap=0 */
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

    /* �������� */
    for (k = 1; k < month; k++) {
        day = day + tab[leap][k];
    }

    return day;
}