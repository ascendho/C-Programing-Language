#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    char level;

    if (grade < 60)
        level = 'E';
    else if (grade < 70)
        level = 'D';
    else if (grade < 80)
        level = 'C';
    else if (grade < 90)
        level = 'B';
    else if (grade <= 100)
        level = 'A';

    printf("%c",level);

    return 0;
}