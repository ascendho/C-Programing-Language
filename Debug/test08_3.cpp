#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char str[80], min[80];

    printf("Input 5 strings:\n");
    scanf("%s",str);
    min = str;
    for(i = 1; i < 5; i++){
        scanf("%s",str);
        if (min > str) {       /* 调试时设置断点 */
            min = str;
        }
    }
    printf("Min is: %s \n", min);

    return 0;
}   

