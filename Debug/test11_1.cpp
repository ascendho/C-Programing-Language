#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int i,j, n = 0;
	char *color[20], str[10], temp[10];
	printf("��������ɫ���ƣ�ÿ��һ����#�������룺\n");
	/*��̬����*/
	scanf("%s", str);
	while(str[0] != '#') {
		color[n] = (char *)malloc(sizeof(char) * (strlen(str) + 1));  
		strcpy(color[n], str);
		n++;
		scanf("%s", str);
	}
	/*����*/
	for(i = 1; i < n; i++) {
		for(j = 0; j < n - i; j++) {
			if(strcmp(color[j], color[j + 1]) > 0){    
				temp = color[j];
				color[j] = color[j + 1];
				color[j + 1] = temp; 
			}
		}
	}
	/*���*/
	for(i = 0; i < n; i++){   /*����ʱ���öϵ�*/
		printf("%s ", color[i]);
	}
	printf("\n");
	return 0;
} 

