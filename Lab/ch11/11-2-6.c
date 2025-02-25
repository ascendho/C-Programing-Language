#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
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
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
/*
 * 从标准输入读入一系列正整数，按照读入顺序建立单链表
 */
 struct ListNode *readlist() {
	// 建立一条带有头节点的单链表
	struct ListNode *head = (struct ListNode *) malloc(sizeof(struct ListNode));
	head->next = NULL;
	struct ListNode *tail = head;

	int number;
	scanf("%d", &number);

	while (number != -1) {
			// 临时节点
			struct ListNode *temp = (struct ListNode *) malloc(sizeof(struct ListNode));
			temp->data = number;
			temp->next = NULL;

			// 将临时节点链接到链表尾部
			tail->next = temp;
			// 更新尾节点
			tail = temp;

			scanf("%d", &number);
	}

	return head;
}

/*
* 将单链表 L 中奇数值的结点分离出来，重新组成一个新的链表
*/
struct ListNode *getodd(struct ListNode **L) {
	// 建立一条带有奇数值链表头节点的单链表
	struct ListNode *oddHead = (struct ListNode *) malloc(sizeof(struct ListNode));
	oddHead->next = NULL;
	struct ListNode *oddTail = oddHead;

	// **L：指向指针 L 的指针，存放指针 *L 的地址，*L 中存放的是原链表头节点的地址
	struct ListNode *head = *L;
	// 因为原链表头节点不存储值，故从头节点的下一个节点开始遍历
	while (head->next != NULL) {
			// 链表中的值为奇数，则将其存进奇数值链表
			if (head->next->data % 2 != 0) {
					struct ListNode *oddTemp = (struct ListNode *) malloc(sizeof(struct ListNode));
					// 将原链表中的奇数值赋值给奇数值链表
					oddTemp->data = head->next->data;
					oddTemp->next = NULL;

					// 将临时节点连接到奇数值链表尾部
					oddTail->next = oddTemp;
					// 奇数值链表尾节点后移
					oddTail = oddTemp;

					// 应题目要求，需删掉原链表中的奇数值节点
					struct ListNode *temp = head->next;
					head->next = temp->next;
					free(temp);
			} else {
					head = head->next;
			}
	}

	// 因头节点不存储值，故头节点后移一个节点
	*L = (*L)->next;
	oddHead = oddHead->next;
	return oddHead;
}
