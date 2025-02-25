#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char *s ){
    char *p=s;
    int blank=0, digit=0, lower=0, other=0, upper=0;
    gets(s);

    for(; *p != '\0'; p++)
         if(*p >= 'A' && *p <= 'Z')
            upper++;
    else if(*p >= 'a' && *p <= 'z')
        lower++;
    else if(*p >= '0' && *p <= '9')
        digit++;
    else if(*p == ' ')
        blank++;
    else
        other++;

    printf("%d %d %d %d %d\n", upper, lower, blank, digit,other);
}