/* ����9-3������n(n<50)��ѧ���ĳɼ���Ϣ��������һ��ѧ����ѧ�š��γ��Լ��ɼ������Զ��庯�����޸ĸ�ѧ��ָ���γ̵ĳɼ���*/

/* �޸�ѧ���ɼ����ṹָ����Ϊ�������� */
# include <stdio.h>

struct student {                    /* ѧ����Ϣ�ṹ���� */
    int num;                        /* ѧ�� */
    char name[10];                  /* ���� */
    int math, english, computer;    /* ���ſγ̳ɼ� */
    double average;                 /* ����ƽ���� */
};

/*��������*/
int update_score(struct student *p, int n, int num, int course, int score);

int main() {
    int i, pos, n, num, course, score;

    /* ����ṹ���� */
    struct student students[50];

    /* ����n��ѧ����Ϣ */
    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Input the info of No.%d:\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num);
        printf("name:");
        scanf("%s", students[i].name);
        printf("math score:");
        scanf("%d", &students[i].math);
        printf("english score:");
        scanf("%d", &students[i].english);
        printf("computer score:");
        scanf("%d", &students[i].computer);
    }

    /* ������޸�ѧ����Ϣ */
    printf("Input the number of updated student: ");
    scanf("%d", &num);

    printf("Choice the course: 1.math 2.english 3.computer: ");
    scanf("%d", &course);

    printf("Input the new score: ");
    scanf("%d", &score);

    /*���ú������޸�ѧ���ɼ�*/
    pos = update_score(students, n, num, course, score);

    /*����޸ĺ��ѧ����Ϣ*/
    if (pos == -1) {
        printf("Not found!\n");
    } else {
        printf("After update:\n");
        printf("num\t math\t english\t computer\n");
        printf("%d\t %d\t %d\t %d\n", students[pos].num, students[pos].math, students[pos].english,
               students[pos].computer);
    }

    return 0;
}

/* �Զ��庯�����޸�ѧ���ɼ� */
int update_score(struct student *p, int n, int num, int course, int score) {
    int i, pos;

    /* ��ѧ�Ų��� */
    for (i = 0; i < n; i++, p++)
        if (p->num == num) {
            break;
        }

    /* �ҵ����޸ĳɼ� */
    if (i < n) {
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
        /* ѧ��λ�� */
        pos = i;
    } else {
        /* �޴�ѧ�� */
        pos = -1;
    }

    return pos;
}