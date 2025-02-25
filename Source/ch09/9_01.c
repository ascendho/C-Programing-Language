/*【例9-1】 输出平均分最高的学生信息。假设学生的基本信息包括学号、姓名、三门课程成绩以及个人平均成绩。
 * 输入n个学生的成绩信息，计算并输出平均分最高的学生信息。*/

/* 输出平均分最高的学生信息*/
#include<stdio.h>

struct student {                   /* 学生信息结构定义 */
    int num;                       /* 学号 */
    char name[10];                 /* 姓名 */
    int computer, english, math;   /* 三门课程成绩 */
    double average;                /* 个人平均成绩 */
};

int main() {
    int i, n;

    /* 定义结构变量 */
    struct student max, stu;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Input the student's number, name and course scores\n");

    for (i = 1; i <= n; i++) {

        printf("No.%d: ", i);
        scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.math, &stu.english, &stu.computer);

        stu.average = (stu.math + stu.english + stu.computer) / 3.0;

        if (i == 1) {
            max = stu;
        } else if (max.average < stu.average) {
            max = stu;
        }
    }

    printf("num:%d, name:%s, average:%.2lf\n", max.num, max.name, max.average);

    return 0;
}