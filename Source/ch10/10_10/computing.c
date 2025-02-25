int extern Count;        /* 其他文件模块定义的全局变量，需要声明为外部变量 */

#include "student_system.h"

/* 计算个人平均成绩的函数 */
void average(struct student s[]) {
    int i;

    for (i = 0; i < Count; i++) {
        s[i].average = (s[i].math + s[i].english + s[i].computer) / 3.0;
    }
}