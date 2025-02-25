#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
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
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist() {
    struct ListNode *head = NULL, *tail, *p;
    int n;
    scanf("%d", &n);
    while(n != -1) {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p -> data = n;
        p -> next = NULL;
        if(head == NULL){
            head = p;
        }else{
            tail -> next = p;
        }
        tail = p;
        scanf("%d", &n);
    }
    return head;
}
struct ListNode *deleteeven( struct ListNode *head )	{
    struct ListNode *p, *tail;
     //1、先处理链表从头就需要删除的情况
    while(head != NULL && head->data %2 == 0){ 
        p = head;    //用p标记head方便释放空间
        head = head->next;
        free(p);     //释放内存空间
    }
    //2、如果删空直接返回NULL
    if(head == NULL){
        return NULL;
    } 
    //3、处理正常情况，head%2 !=0
    p = head;
    tail = p -> next;
    while(tail != NULL) {
        if(tail -> data %2 == 0) {
            p -> next = tail -> next;    //tail前节点连接tail后节点
            free(tail);              //释放内存
        }else	p = tail;
        tail = p -> next;
    }
    return head;
}