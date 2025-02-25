#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* createlist()
{
    struct ListNode* head = NULL, * p = NULL;
    int data;
    scanf("%d", &data);
    while (data != -1)
    {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->data = data;
        p->next = head;
        head = p;
        scanf("%d", &data);
    }
    return head;
}
