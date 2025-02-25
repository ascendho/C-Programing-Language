#include <stdio.h>
int fact(int n);
int multi(int n);	
int main(void)
{	
    double eps, item, sum;
    int i;

    printf("Enter eps：");
    scanf("%le", &eps);
   	i = 0;
   	item = 1;
    sum = 0;
    while( item >= eps ){
        sum = sum + item;
        i++;
        item = fact(i) / multi(2 * i + 1);       
    }    /* 调试时设置断点1 */
	sum = sum + item;  
    printf("PI = %0.5f\n", sum * 2);
        
    return 0;
}

int fact(int n)			
{	
    int result;	
    int i;		

    result = 1;
    for(i = 0; i <= n; i++){
        result = result * i;
    }		
       
    return result;      /* 调试时设置断点2 */
}

int multi(int n)		
{	
    int result;
    int i;		

    result = 1;
    for(i = 3; i <= n; i = i + 2){
       result = result * i;
    }

    return result;     /* 调试时设置断点3 */ 
}
