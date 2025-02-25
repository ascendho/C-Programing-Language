/* 【例3-3】输入一个非负整数n，再输入n个学生的成绩，计算平均分，并统计不及格成绩的学生人数 */

/* 输入一批学生的成绩，计算平均分，并统计不及格成绩的学生人数 */
# include <stdio.h>

int main() {
    int count, i, n;        /* count记录不及格成绩的个数 */
    double score, total;    /* score存放输入的成绩, total保存成绩之和 */

    /* 提示输入学生人数n */
    printf("Enter n: ");
    scanf("%d", &n);

    total = 0;
    count = 0;

    for (i = 1; i <= n; i++) {
        /* 提示输入第i个成绩 */
        printf("Enter score #%d: ", i);

        /* 输入第i个成绩，%lf中的l是字母 */
        scanf("%lf", &score);

        /* 累加成绩 */
        total = total + score;

        /* 统计不及格成绩的学生人数 */
        if (score < 60) {
            count++;
        }
    }

    /* 分母不能为0 */
    if (n != 0) {
        printf("Average = %.2f\n", total / n);
    } else {
        /* 当n为0时，平均分为0 */
        printf("Average = %.2f\n", 0.0);
    }

    printf("Number of failures = %d\n", count);

    return 0;
}