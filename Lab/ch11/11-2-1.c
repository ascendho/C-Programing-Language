#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;
    
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
void input(){
	struct stud_node *q;
	int temp;
	scanf("%d",&temp);
	while(temp){
		q=(struct stud_node*)malloc(sizeof(struct stud_node));
		q->num=temp;
		scanf(" %s %d",&q->name,&q->score);
		if(head==NULL) head=tail=q;
		else{
			tail->next=q;
			tail=tail->next;
		}
		tail->next=NULL;
		scanf("%d",&temp);
	}
}