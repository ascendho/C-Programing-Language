/*【例4-2】统计一批学生的平均成绩与不及格人数。更改例3-3，从键盘输入一批学生的成绩，计算平均成绩，并统计不及格学生的人数 */

/* 输入一批学生的成绩，以负数作为结束标志，计算平均成绩，并统计不及格人数 */
# include <stdio.h>

int main() {
    int count, num;             /* num 记录输入的个数，count记录不及格人数 */
    double score, total;        /* 分别存放成绩、成绩之和 */

    num = 0;
    total = 0;
    count = 0;

    /* 输入提示 */
    printf("Enter scores: ");

    /* 输入第一个数据，%lf中的l是字母 */
    scanf("%lf", &score);

    /* 当输入数据score大于等于0时，执行循环 */
    while (score >= 0) {
        total = total + score;    /* 累加成绩 */
        num++;                    /* 计数 */

        if (score < 60) {
            count++;
        }

        /* 读入一个新数据，为下次循环做准备 */
        scanf("%lf", &score);
    }

    if (num != 0) {
        printf("Average is %.2f\n", total / num);
        printf("Number of failures is %d\n", count);
    } else {
        printf("Average is 0\n");
    }

    return 0;
}