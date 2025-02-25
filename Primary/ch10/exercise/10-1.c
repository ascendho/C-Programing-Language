#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */
int search(int n)
{
	int i,cnt=0;
	for(i=101;i<=n;i++){
		double digit=sqrt(i);
		int a=i/100;
		int b=i/10%10;
		int c=i%10;
		if((digit==(int)digit)&&(a==b||a==c||b==c)) 
		cnt++;
	}
	return cnt;
}
