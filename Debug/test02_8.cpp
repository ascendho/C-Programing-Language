#include <stdio.h>
int main(void)
{    
    int fahr , lower, upper;  /* fahr��ʾ���϶� */
    double celsius;        /* celsius��ʾ���϶� */ 

    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper);
    if (lower > upper){
        printf ("Invalid.\n");
    }else{
	    printf("fahr  celsius\n");             /* ��ʾ��ͷ */
	    /* �¶�ת�� */
	    for (fahr = lower , fahr <= upper, fahr ++) ;
	        celsius = 5 /9 * (fahr - 32.0); 
	        printf("%3.0f %6.1f\n", fahr, celsius); 
	        
	}

   return 0; 
}
