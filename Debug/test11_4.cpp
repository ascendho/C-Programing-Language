#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char  code[8];
	struct node *next;
};
int main(void)
{
	char str[8];
	int count, i, n, size = sizeof(struct node);
	struct node *head, *p;
	
	head = NULL;
	gets(str);
	/* 按输入数据的逆序建立链表 */
	while(strcmp(str, "#") != 0){
		p = (struct node *)malloc(size);
		strcpy(p->code, str);
		head = p->next;
		head = p; 
		gets(str);
	}
	count = 0;
	for(p = head; p->next != NULL; p = p->next) {
		if(p->(code[1]) == '0' && p->(code[2]) == '2') {
			count++ ;
		}
	}
	printf("%d\n", count);
	
	return 0;
}

