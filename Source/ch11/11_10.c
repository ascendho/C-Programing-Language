/*【例11-10】建立一个学生成绩信息（包括学号、姓名、成绩）的单向链表，学生数据按学号由小到大顺序排列，
 * 要求实现对成绩信息的插入、修改、删除和遍历操作。*/

/* 用链表实现学生成绩信息的管理  */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud_node {
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *Create_Stu_Doc();  /* 新建链表 */
struct stud_node *InsertDoc(struct stud_node *head, struct stud_node *stud); /* 插入 */
struct stud_node *DeleteDoc(struct stud_node *head, int num);  /* 删除 */
void Print_Stu_Doc(struct stud_node *head);  /* 遍历 */

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

/*新建链表*/
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
        head = InsertDoc(head, p);    /* 调用插入函数 */
        scanf("%d%s%d", &num, name, &score);
    }

    return head;
}

/* 插入操作 */
struct stud_node *InsertDoc(struct stud_node *head, struct stud_node *stud) {
    struct stud_node *ptr, *ptr1, *ptr2;

    ptr2 = head;
    ptr = stud;                /* ptr指向待插入的新的学生记录结点 */

    /* 原链表为空时的插入 */
    if (head == NULL) {
        head = ptr;            /* 新插入结点成为头结点 */
        head->next = NULL;
    } else {                        /* 原链表不为空时的插入 */
        while ((ptr->num > ptr2->num) && (ptr2->next != NULL)) {
            ptr1 = ptr2;            /* ptr1, ptr2各后移一个结点 */
            ptr2 = ptr2->next;
        }
        if (ptr->num <= ptr2->num) {    /* 在ptr1与ptr2之间插入新结点 */
            if (head == ptr2) {
                head = ptr;
            } else {
                ptr1->next = ptr;
            }
            ptr->next = ptr2;
        } else {                            /* 新插入结点成为尾结点 */
            ptr2->next = ptr;
            ptr->next = NULL;
        }
    }

    return head;
}

/* 删除操作 */
struct stud_node *DeleteDoc(struct stud_node *head, int num) {
    struct stud_node *ptr1, *ptr2;

    /* 要被删除结点为表头结点 */
    while (head != NULL && head->num == num) {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }

    if (head == NULL) {  /*链表空 */
        return NULL;
    }

    /* 要被删除结点为非表头结点  */
    ptr1 = head;
    ptr2 = head->next; /*从表头的下一个结点搜索所有符合删除要求的结点 */

    while (ptr2 != NULL) {
        if (ptr2->num == num) {    /* ptr2所指结点符合删除要求 */
            ptr1->next = ptr2->next;
            free(ptr2);
        } else {
            ptr1 = ptr2;       /* ptr1后移一个结点 */
        }
        ptr2 = ptr1->next;    /* ptr2指向ptr1的后一个结点 */
    }

    return head;
}

/*遍历操作*/
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