# include <stdio.h>
int main(void)
{
    int blank, digit, other;  	/* ����3�������ֱ���ͳ�ƽ�� */
    char ch;
   
    blank = digit = other = 0;  /* �ô��ͳ�ƽ����3�������ĳ�ֵΪ�� */
    ch = getchar();				/* ����һ���ַ� */
    while(ch == '\n'){   		/* ����ʱ���öϵ�1 */	
 		switch (ch){
 			case '0' : case '1' : case '2' : case '3' : case '4' :
 			case '5' : case '6' : case '7' : case '8' : case '9' :  
 				digit ++;
 				break; 
 			case ' ':  
 			 	blank ++;
 							
 			default:			/* ����ʱ���öϵ�2 */
 				other ++; 
 				break;
 		}   
 			
 	}
 	printf("blank = %d, digit = %d, other = %d\n", blank, digit, other);
	
	return 0;
}
