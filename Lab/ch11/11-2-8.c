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
struct ListNode *readlist(){
	struct ListNode *head=NULL,*tail,*p;
	int num;
	scanf("%d",&num);
	while(num!=-1){
		p=(struct ListNode *)malloc(sizeof(struct ListNode));
		p->data=num;
		if(head==NULL) head=tail=p;
		else{
			tail->next=p;
			tail=p;
		}
		scanf("%d",&num);
	}
	tail->next=NULL;
	return head;
}
struct ListNode *deletem( struct ListNode *L, int m ){
	struct ListNode *tail,*p;
	while(L&&L->data==m) {
		p=L;
		L=L->next;
		free(p);
	}
	if(L==NULL) return NULL;
	tail=L;
	p=tail->next;
	while(p!=NULL){
		if(p->data==m){
			tail->next=p->next;
			free(p);	
		}else tail=p;
		p=tail->next;
	} 
	return L;
}