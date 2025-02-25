#include <stdio.h> 
int main(void)
{
    double x, y;           	

    printf("Enter x: ");   
    scanf("%lf", x);      	
    if(x != 0){          
        y = 1 / x        	
    } else { 
        y = 0;           	
   }    
    printf("f(%.1f) = %.1f\n", x, y);  

    return 0;  
}
