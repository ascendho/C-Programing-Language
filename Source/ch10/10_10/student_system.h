#ifndef CH10_STUDENT_SYSTEM_H
#define CH10_STUDENT_SYSTEM_H

#include<stdio.h>
#include<string.h>

struct student {                    /*学生信息结构定义*/
    int num;                        /*学号*/
    char name[10];                /* 姓名 */
    int computer, english, math;    /* 三门课程成绩 */
    double average;                /* 个人平均成绩 */
};

int Count = 0;                        /* 全局变量，记录当前学生总数 */

#define MaxSize 50

#endif //CH10_STUDENT_SYSTEM_H