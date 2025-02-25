#include <stdio.h>
int main (void )
{	
    struct emp{
        char name[10];
        double jbgz, jt, jj, zc;  
	};
 	emp s[10];
    int i, n;

    printf("n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s%lf%lf%lf%lf", s[i].name, s[i].&jbgz, s[i].&jt, s[i].&jj, s[i].&zc);
    }
    for (i = 0; i < n; i++){  /* 调试时设置断点 */
        printf ("%s：%.2f\n", s[i].name, s[i].jbgz+s[i].jt+ s[i].jt -s[i].zc);
    }

    return 0;
}  

