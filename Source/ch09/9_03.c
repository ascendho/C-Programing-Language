/* 【例9-3】输入n(n<50)个学生的成绩信息，再输入一个学生的学号、课程以及成绩，在自定义函数中修改该学生指定课程的成绩。*/

/* 修改学生成绩，结构指针作为函数参数 */
# include <stdio.h>

struct student {                    /* 学生信息结构定义 */
    int num;                        /* 学号 */
    char name[10];                  /* 姓名 */
    int math, english, computer;    /* 三门课程成绩 */
    double average;                 /* 个人平均分 */
};

/*函数声明*/
int update_score(struct student *p, int n, int num, int course, int score);

int main() {
    int i, pos, n, num, course, score;

    /* 定义结构数组 */
    struct student students[50];

    /* 输入n个学生信息 */
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
    }

    /* 输入待修改学生信息 */
    printf("Input the number of updated student: ");
    scanf("%d", &num);

    printf("Choice the course: 1.math 2.english 3.computer: ");
    scanf("%d", &course);

    printf("Input the new score: ");
    scanf("%d", &score);

    /*调用函数，修改学生成绩*/
    pos = update_score(students, n, num, course, score);

    /*输出修改后的学生信息*/
    if (pos == -1) {
        printf("Not found!\n");
    } else {
        printf("After update:\n");
        printf("num\t math\t english\t computer\n");
        printf("%d\t %d\t %d\t %d\n", students[pos].num, students[pos].math, students[pos].english,
               students[pos].computer);
    }

    return 0;
}

/* 自定义函数，修改学生成绩 */
int update_score(struct student *p, int n, int num, int course, int score) {
    int i, pos;

    /* 按学号查找 */
    for (i = 0; i < n; i++, p++)
        if (p->num == num) {
            break;
        }

    /* 找到，修改成绩 */
    if (i < n) {
        switch (course) {
            case 1:
                p->math = score;
                break;
            case 2:
                p->english = score;
                break;
            case 3:
                p->computer = score;
                break;
        }
        /* 学生位置 */
        pos = i;
    } else {
        /* 无此学号 */
        pos = -1;
    }

    return pos;
}