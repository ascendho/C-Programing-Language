#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct stud_node* createlist()
{
    int num;
    struct stud_node* head = NULL, * tail = NULL, * p = NULL;
    scanf("%d", &num);
    while (num)
    {
        p = (struct stud_node*)malloc(sizeof(struct stud_node));
        p->num = num;
        scanf("%s %d", p->name, &p->score);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            tail->next = p;
        tail = p;
        scanf("%d", &num);
    }
    return head;
}
struct stud_node* deletelist(struct stud_node* head, int min_score)
{
    struct stud_node* ptr1, * ptr2;
    /*要被删除的是表头结点*/
    while (head != NULL && head->score < min_score)
    {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }
    if (head == NULL)    //空链表
        return NULL;
    /*要被删除的是非表头结点*/
    ptr1 = head;
    ptr2 = head->next;//从表头的下一个结点搜索所有符合删除要求的结点
    while (ptr2 != NULL)
    {
        if (ptr2->score < min_score)//ptr2所指结点符合删除要求
        {
            ptr1->next = ptr2->next;
            free(ptr2);
        }
        else
            ptr1 = ptr2;//ptr1后移一个结点
        ptr2 = ptr1->next;//ptr2指向ptr1的后一个结点
    }
    return head;
}