#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ){
    // 确定起始位置
    t=t+m-1;

    while(*t!='\0'){
        *s=*t;
        s++;
        t++;
    }

    // 补上'\0'
    *s='\0';
}