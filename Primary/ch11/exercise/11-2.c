#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex(char *s) {
    if (s == NULL) return -1;
    static char *weeks[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    for (int i = 0; i < 7; i++) {
        if (strcmp(s, weeks[i]) == 0) {
            return i;
        }
    }
    return -1;
}