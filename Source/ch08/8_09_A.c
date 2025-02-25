/*【例8-9】 找最小的字符串。
 * 输入n个字符串，输出其中最小的字符串。*/

/* 程序A：处理字符串 */
#include <stdio.h>
#include <string.h>

int main( )
{
	int i, n;
    char sx[80], smin[80];  
	  
    scanf("%d", &n); 
    scanf("%s", sx);
    
    strcpy(smin, sx);

    for(i = 1; i < n; i++){
    	scanf("%s", sx);
       	if(strcmp(sx, smin) < 0){
       		strcpy(smin, sx);
	   	}     
    }

    printf("min is %s\n", smin);

    return 0;
}