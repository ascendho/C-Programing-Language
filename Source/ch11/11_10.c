/*����11-10������һ��ѧ���ɼ���Ϣ������ѧ�š��������ɼ����ĵ�������ѧ�����ݰ�ѧ����С����˳�����У�
 * Ҫ��ʵ�ֶԳɼ���Ϣ�Ĳ��롢�޸ġ�ɾ���ͱ���������*/

/* ������ʵ��ѧ���ɼ���Ϣ�Ĺ���  */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud_node {
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *Create_Stu_Doc();  /* �½����� */
struct stud_node *InsertDoc(struct stud_node *head, struct stud_node *stud); /* ���� */
struct stud_node *DeleteDoc(struct stud_node *head, int num);  /* ɾ�� */
void Print_Stu_Doc(struct stud_node *head);  /* ���� */

int main() {
    struct stud_node *head, *p;
    int choice, num, score;
    char name[20];
    int size = sizeof(struct stud_node);

    do {
        printf("1:Create 2:Insert 3:Delete 4:Print 0:Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                head = Create_Stu_Doc();
                break;
            case 2:
                printf("Input num,name and score:\n");
                scanf("%d%s%d", &num, name, &score);
                p = (struct stud_node *) malloc(size);
                p->num = num;
                strcpy(p->name, name);
                p->score = score;
                head = InsertDoc(head, p);
                break;
            case 3:
                printf("Input num:\n");
                scanf("%d", &num);
                head = DeleteDoc(head, num);
                break;
            case 4:
                Print_Stu_Doc(head);
                break;
            case 0:
                break;
        }
    } while (choice != 0);

    return 0;
}

/*�½�����*/
struct stud_node *Create_Stu_Doc() {
    struct stud_node *head, *p;
    int num, score;
    char name[20];
    int size = sizeof(struct stud_node);

    head = NULL;
    printf("Input num,name and score:\n");
    scanf("%d%s%d", &num, name, &score);

    while (num != 0) {
        p = (struct stud_node *) malloc(size);
        p->num = num;
        strcpy(p->name, name);
        p->score = score;
        head = InsertDoc(head, p);    /* ���ò��뺯�� */
        scanf("%d%s%d", &num, name, &score);
    }

    return head;
}

/* ������� */
struct stud_node *InsertDoc(struct stud_node *head, struct stud_node *stud) {
    struct stud_node *ptr, *ptr1, *ptr2;

    ptr2 = head;
    ptr = stud;                /* ptrָ���������µ�ѧ����¼��� */

    /* ԭ����Ϊ��ʱ�Ĳ��� */
    if (head == NULL) {
        head = ptr;            /* �²������Ϊͷ��� */
        head->next = NULL;
    } else {                        /* ԭ����Ϊ��ʱ�Ĳ��� */
        while ((ptr->num > ptr2->num) && (ptr2->next != NULL)) {
            ptr1 = ptr2;            /* ptr1, ptr2������һ����� */
            ptr2 = ptr2->next;
        }
        if (ptr->num <= ptr2->num) {    /* ��ptr1��ptr2֮������½�� */
            if (head == ptr2) {
                head = ptr;
            } else {
                ptr1->next = ptr;
            }
            ptr->next = ptr2;
        } else {                            /* �²������Ϊβ��� */
            ptr2->next = ptr;
            ptr->next = NULL;
        }
    }

    return head;
}

/* ɾ������ */
struct stud_node *DeleteDoc(struct stud_node *head, int num) {
    struct stud_node *ptr1, *ptr2;

    /* Ҫ��ɾ�����Ϊ��ͷ��� */
    while (head != NULL && head->num == num) {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }

    if (head == NULL) {  /*����� */
        return NULL;
    }

    /* Ҫ��ɾ�����Ϊ�Ǳ�ͷ���  */
    ptr1 = head;
    ptr2 = head->next; /*�ӱ�ͷ����һ������������з���ɾ��Ҫ��Ľ�� */

    while (ptr2 != NULL) {
        if (ptr2->num == num) {    /* ptr2��ָ������ɾ��Ҫ�� */
            ptr1->next = ptr2->next;
            free(ptr2);
        } else {
            ptr1 = ptr2;       /* ptr1����һ����� */
        }
        ptr2 = ptr1->next;    /* ptr2ָ��ptr1�ĺ�һ����� */
    }

    return head;
}

/*��������*/
void Print_Stu_Doc(struct stud_node *head) {
    struct stud_node *ptr;

    if (head == NULL) {
        printf("\nNo Records\n");
        return;
    }

    printf("\nThe Students' Records Are: \n");
    printf("Num\t Name\t Score\n");

    for (ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%d\t%s\t%d \n", ptr->num, ptr->name, ptr->score);
    }
}