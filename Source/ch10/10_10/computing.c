int extern Count;        /* �����ļ�ģ�鶨���ȫ�ֱ�������Ҫ����Ϊ�ⲿ���� */

#include "student_system.h"

/* �������ƽ���ɼ��ĺ��� */
void average(struct student s[]) {
    int i;

    for (i = 0; i < Count; i++) {
        s[i].average = (s[i].math + s[i].english + s[i].computer) / 3.0;
    }
}