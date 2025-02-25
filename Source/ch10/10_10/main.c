/* 【例10-10】请在例9-1、例9-2和例9-3的基础上，分模块设计一个学生信息库系统。
 * 该系统包含学生基本信息的建立和输出、计算学生平均成绩、按照学生的平均成绩排序以及查询、修改学生的成绩等功能。*/

/*  用文件包含连接各程序文件模块 */
#include "input_output.c"
#include "computing.c"
#include "update.c"
#include "search.c"
#include "student_system.h"

int main() {
    /* 定义学生信息结构数组 */
    struct student students[MaxSize];

    /* 输入学生信息结构数组 */
    new_student(students);

    /* 计算每一个学生的平均成绩 */
    average(students);

    /* 按学生的平均成绩排序 */
    sort(students);

    /* 显示排序后的结构数组 */
    output_student(students);

    /* 修改指定输入的学生信息 */
    modify(students);

    /* 显示修改后的结构数组 */
    output_student(students);

    return 0;
}