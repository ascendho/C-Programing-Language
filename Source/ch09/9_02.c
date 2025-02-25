/* 【例9-2】输入n（n<50）个学生的成绩信息，按照学生的个人平均分从高到低输出他们的信息。 */

/* 学生成绩排序 */
# include <stdio.h>

struct student {                    /* 学生信息结构定义 */
    int num;                        /* 学号 */
    char name[10];                  /* 姓名 */
    int math, english, computer;    /* 三门课程成绩 */
    double average;                 /* 个人平均分 */
};

double count_average(struct student s);

int main() {
    int i, j, n, index;

    /* 定义结构数组 */
    struct student students[50], temp;

    /* 输入 */
    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Input the info of No.%d:\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num);
        printf("name:");
        scanf("%s", students[i].name);
        printf("math score:");
        scanf("%d", &students[i].math);
        printf("english score:");
        scanf("%d", &students[i].english);
        printf("computer score:");
        scanf("%d", &students[i].computer);
        students[i].average = count_average(students[i]);   /* 计算平均分 */
    }

    /* 结构数组排序，选择排序法 */
    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = i + 1; j < n; j++) {
            /* 比较平均分*/
            if (students[j].average > students[index].average) {
                index = j;
            }
        }

        /* 交换数组元素 */
        temp = students[index];
        students[index] = students[i];
        students[i] = temp;
    }

    /* 输出排序后的信息 */
    printf("num\t name\t average\n");

    for (i = 0; i < n; i++) {
        printf("%d\t %s\t %.2lf\n", students[i].num, students[i].name, students[i].average);
    }

    return 0;
}

/* 计算个人平均分 */
double count_average(struct student s)
{
    return (s.math + s.english + s.computer) / 3.0;
}