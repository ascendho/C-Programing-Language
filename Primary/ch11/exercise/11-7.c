#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();

struct ListNode *getodd(struct ListNode **L);

void printlist(struct ListNode *L) {
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
    struct ListNode *p, *q, *head = NULL;

    int n;
    while (scanf("%d", &n) == 1 && n != -1) {

        p = (struct ListNode *) malloc(sizeof(struct ListNode));
        p->data = n;
        p->next = NULL;

        if (head) {
            q->next = p;
            q = p;
        } else {
            head = q = p;
        }
    }

    return head;
}

struct ListNode *getodd(struct ListNode **L) {
    struct ListNode *ohead = NULL, *p1, *p;
    struct ListNode *dhead = NULL, *p2;

    for (p = *L; p; p = p->next) {
        if (p->data % 2) {
            if (!ohead) ohead = p1 = p;
            else {
                p1->next = p;
                p1 = p;
            }
        } else {
            if (!dhead) dhead = p2 = p;
            else {
                p2->next = p;
                p2 = p;
            }
        }
    }

    if (ohead) p1->next = NULL;
    if (dhead) p2->next = NULL;
    *L = dhead;

    return ohead;
}
