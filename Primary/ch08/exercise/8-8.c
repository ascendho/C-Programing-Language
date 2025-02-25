#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s ){
    int head=0,tail=strlen(s)-1;

    while(head<tail){
        if(s[head]!=s[tail])
            return false;

        head++;
        tail--;
    }

    return true;
}