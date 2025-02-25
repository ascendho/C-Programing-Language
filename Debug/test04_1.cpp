# include <stdio.h>
int main(void)
{
    int blank, digit, other;  	/* 定义3个变量分别存放统计结果 */
    char ch;
   
    blank = digit = other = 0;  /* 置存放统计结果的3个变量的初值为零 */
    ch = getchar();				/* 输入一个字符 */
    while(ch == '\n'){   		/* 调试时设置断点1 */	
 		switch (ch){
 			case '0' : case '1' : case '2' : case '3' : case '4' :
 			case '5' : case '6' : case '7' : case '8' : case '9' :  
 				digit ++;
 				break; 
 			case ' ':  
 			 	blank ++;
 							
 			default:			/* 调试时设置断点2 */
 				other ++; 
 				break;
 		}   
 			
 	}
 	printf("blank = %d, digit = %d, other = %d\n", blank, digit, other);
	
	return 0;
}
