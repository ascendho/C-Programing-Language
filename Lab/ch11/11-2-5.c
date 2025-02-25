#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2){
	struct ListNode *head=NULL,*tail,*p;
	if(list1==NULL) return list2;
	if(list2==NULL) return list1;
	while(list1&&list2){
		if(list1->data<list2->data){
			p=list1;
			list1=list1->next;
		}else{
			p=list2;
			list2=list2->next;
		}
		p->next=NULL;
		if(head==NULL) head=tail=p;
		else{
			tail->next=p;
			tail=p;
		}
	}
	if(list1) tail->next=list1;
	else tail->next=list2;
	while(tail->next!=NULL) tail=tail->next;
	return head;
}