#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *reverse( struct ListNode *head )
{
    struct ListNode *a=NULL,*b=NULL;
    while(head)
    {
        b=head->next;//保存下一个结点
        head->next=a;//指向上一个结点
        a=head;//这个节点变为上一个结点
        head=b;//把下一个结点拿出来进行“修改”
    }
    return a;
}