#include "student_system.h"

int extern Count;           /* �����ļ�ģ�鶨���ȫ�ֱ�������Ҫ����Ϊ�ⲿ���� */

/*�޸�ѧ���ɼ��ĺ���*/
void modify(struct student *p) {
    int num, course, score, i;

    printf("Input the number of updated student: ");
    scanf("%d", &num);

    printf("Choice the course: 1.math 2.english 3.computer: ");
    scanf("%d", &course);

    printf("Input the new score: ");
    scanf("%d", &score);

    /* ��ѧ�Ų��� */
    for (i = 0; i < Count; i++, p++) {
        if (p->num == num) {
            break;
        }
    }

    if (i < Count) { /* �ҵ����޸ĳɼ� */
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
    }
}

/* ƽ���ɼ�����ĺ��� */
void sort(struct student s[]) {
    struct student temp;
    int i, index, j;

    for (i = 0; i < Count - 1; ++i) {
        index = i;
        for (j = i + 1; j < Count; j++) {
            if (s[j].average > s[index].average) {   /* �Ƚ�ƽ����*/
                index = j;
            }
        }

        /* ��������Ԫ�� */
        temp = s[index];
        s[index] = s[i];
        s[i] = temp;
    }
}