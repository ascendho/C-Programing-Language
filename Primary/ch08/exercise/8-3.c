#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
// 法一:
/*
void ArrayShift( int a[], int n, int m ){
    int b[n];
    m%=n;

    for(int i=0;i<n;i++)
        b[(i+m)%n]=a[i];

    for(int i=0;i<n;i++)
        a[i]=b[i];
} */

// 法二:
void ArrayShift(int a[], int n, int m){
    for(int i = 1; i <= m; i++){
        int k = a[n-1];

        for(int j = n - 1; j > 0; j--)
            a[j] = a[j-1];
        a[0] = k;
     }
}