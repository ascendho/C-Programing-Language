#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin( int n ){
	//十进制转二进制
	int a=n,b=0,c[999];
	while(n>=2){
			n=n/2;
			b++;
	}
	n=b;
	while(b>=0){
			c[b]=a%2;
			a=a/2;
			b--;
	}
	for(int i=0;i<=n;i++)
			printf("%d",c[i]);
}