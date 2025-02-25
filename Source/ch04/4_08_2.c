/* 【例4-8-2】求最值问题。输入一批学生的成绩，找出最高分 */

/* 从输入的一批以负数结束的成绩中选出最高分，用while语句实现 */
#include <stdio.h>

int main() {
    /* max中放最高分 */
    int mark, max;

    /* 输入提示 */
    printf("Enter marks:");

    /* 读入第一个成绩 */
    scanf("%d", &mark);

    /* 假设第一个成绩是最高分 */
    max = mark;

    /*  当输入的成绩 mark 大于等于0时，执行循环 */
    while (mark >= 0) {
        if (max < mark) {                 /* 如果读入的成绩比最高分高 */
            max = mark;                   /* 再假设该成绩为最高分 */
        }

        /* 读入下一个成绩 */
        scanf("%d", &mark);
    };

    printf("Max = %d\n", max);

    return 0;
}