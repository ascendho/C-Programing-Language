/* ����10-10��������9-1����9-2����9-3�Ļ����ϣ���ģ�����һ��ѧ����Ϣ��ϵͳ��
 * ��ϵͳ����ѧ��������Ϣ�Ľ��������������ѧ��ƽ���ɼ�������ѧ����ƽ���ɼ������Լ���ѯ���޸�ѧ���ĳɼ��ȹ��ܡ�*/

/*  ���ļ��������Ӹ������ļ�ģ�� */
#include "input_output.c"
#include "computing.c"
#include "update.c"
#include "search.c"
#include "student_system.h"

int main() {
    /* ����ѧ����Ϣ�ṹ���� */
    struct student students[MaxSize];

    /* ����ѧ����Ϣ�ṹ���� */
    new_student(students);

    /* ����ÿһ��ѧ����ƽ���ɼ� */
    average(students);

    /* ��ѧ����ƽ���ɼ����� */
    sort(students);

    /* ��ʾ�����Ľṹ���� */
    output_student(students);

    /* �޸�ָ�������ѧ����Ϣ */
    modify(students);

    /* ��ʾ�޸ĺ�Ľṹ���� */
    output_student(students);

    return 0;
}