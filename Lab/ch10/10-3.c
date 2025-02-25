#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;
    
    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int Ack( int m, int n ){
    if(m>0&&n>0)
        return Ack(m-1,Ack(m,n-1));
    if(n==0&&m>0)
        return Ack(m-1,1);
    if(m==0) return n+1;
}