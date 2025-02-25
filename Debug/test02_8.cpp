#include <stdio.h>
int main(void)
{    
    int fahr , lower, upper;  /* fahr表示华氏度 */
    double celsius;        /* celsius表示摄氏度 */ 

    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper);
    if (lower > upper){
        printf ("Invalid.\n");
    }else{
	    printf("fahr  celsius\n");             /* 显示表头 */
	    /* 温度转换 */
	    for (fahr = lower , fahr <= upper, fahr ++) ;
	        celsius = 5 /9 * (fahr - 32.0); 
	        printf("%3.0f %6.1f\n", fahr, celsius); 
	        
	}

   return 0; 
}
