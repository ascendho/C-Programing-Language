#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    int num;
    while (scanf("%d", &num) == 1 && num != -1) {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->data = num;
        node->next = NULL;
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

struct ListNode *deletem(struct ListNode *L, int m) {
    // 创建虚拟头节点简化删除操作
    struct ListNode dummy;
    dummy.next = L;
    struct ListNode *prev = &dummy;
    struct ListNode *curr = L;
    
    while (curr) {
        if (curr->data == m) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return dummy.next;
}