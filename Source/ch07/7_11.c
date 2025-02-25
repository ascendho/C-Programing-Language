/*【例7-11】输入一个以回车符为结束标志的字符串（不超过80个字符），判断该字符串是否为回文。*/

/*判断字符串是否为回文*/
#include<stdio.h>

# define MAXN 80

int main() {
    int i, k;
    char line[MAXN];

    /* 输入字符串 */
    /* 输入提示 */
    printf("Enter a string: ");

    k = 0;
    while ((line[k] = getchar()) != '\n') {
        k++;
    }

    // 注: 添加上结尾符!
    line[k] = '\0';

    /* 判断字符串line是否为回文 */
    i = 0;                      /* i是字符串首字符的下标 */
    k = k - 1;                  /* k是字符串尾字符的下标 */

    /* i和k两个下标从字符串首尾两端同时向中间移动，逐对判断对应字符是否相等 */
    while (i < k) {
        /* 若对应字符不相等，则提前结束循环*/
        if (line[i] != line[k]) {
            break;
        }
        i++;
        k--;
    }

    if (i >= k) {
        /*判断for循环是否正常结束，若是则说明字符串是回文 */
        printf("It is a plalindrome\n");
    } else {
        /* for循环非正常结束，说明对应字符不等 */
        printf("It is not a plalindrome\n");
    }

    return 0;
}