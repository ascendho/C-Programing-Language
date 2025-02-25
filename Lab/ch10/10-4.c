#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void printdigits( int n ){
    //对一个整数进行按位顺序输出
    int b=n,count=0,a[9999];
    while(n>10){
        count++;
        n=n/10;
    }
    n=count;
    while(count>=0){
        a[count]=b%10;
        b=b/10;
        count--;
    }
    for(int i=0;i<=n;i++){
        printf("%d\n",a[i]);
    }
}