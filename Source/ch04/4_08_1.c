/* 【例4-8-1】求最值问题。输入一批学生的成绩，找出最高分 */

/*  从输入的n个成绩中选出最高分，用for语句实现  */
#include <stdio.h>

int main() {
    /* max中放最高分 */
    int i, mark, max, n;

    /* 输入提示 */
    printf("Enter n: ");

    /* 输入数据个数 */
    scanf("%d", &n);

    /* 提示输入n个成绩 */
    printf("Enter %d marks: ", n);

    /* 读入第一个成绩 */
    scanf("%d", &mark);

    max = mark;                      /* 假设第一个成绩是最高分 */
    for (i = 1; i < n; i++) {        /* 由于已经读了一个数，循环执行n-1次 */

        /* 读入下一个成绩 */
        scanf("%d", &mark);

        if (max < mark) {            /* 如果该成绩比最高分高 */
            max = mark;              /* 再假设该成绩为最高分 */
        }
    }

    printf("Max = %d\n", max);

    return 0;
}