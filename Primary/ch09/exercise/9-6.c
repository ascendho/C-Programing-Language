#include <stdio.h>

#define MAXN 10

struct student {
    int num;
    char name[20];
    int score;
    char grade;
};

int set_grade(struct student *p, int n);

int main() {
    struct student stu[MAXN], *ptr;
    int n, i, count;

    ptr = stu;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
    }
    count = set_grade(ptr, n);
    printf("The count for failed (<60): %d\n", count);
    printf("The grades:\n");
    for (i = 0; i < n; i++)
        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
    return 0;
}

/* 你的代码将被嵌在这里 */
int set_grade(struct student *p, int N) {
    int count = 0;

    for (int i = 0; i < N; i++, p++) {
        if (p->score >= 85)
            p->grade = 'A';
        else if (p->score >= 70)
            p->grade = 'B';
        else if (p->score >= 60)
            p->grade = 'C';
        else {
            p->grade = 'D';
            count++;
        }
    }

    return count;
}