/*【例7-12】 为了防止信息被别人轻易窃取，需要把电码明文通过加密方式变换成为密文。
 * 输入一个以回车符为结束标志的字符串（少于80个字符），再输入一个正整数offset，用凯撒密码将其加密后输出。
 * 凯撒密码的加密规则是将明文中的所有字母都在字母表上向后移动offset位后生成密文。
*/

/* 凯撒密码加密（后偏移） */
# include<stdio.h>

# define MAXN 80         /* 定义符号常量MAXN */
# define M 26            /* 定义符号常量M，表示字母表中大写或者小写字母的数量26 */

int main() {
    int i, offset;
    char str[MAXN];

    /* 输入字符串 */
    /* 提示输入字符串 */
    printf("Enter a string: ");

    i = 0;
    while ((str[i] = getchar()) != '\n') {
        i++;
    }

    /* 注: 将结束符 '\0' 存入数组 */
    str[i] = '\0';

    /* 提示输入offset */
    printf("Enter offset: ");
    scanf("%d", &offset);

    if (offset > M) {            /* 如果offset超过26 */
        offset = offset % M;     /* 移位效果相当于取其余数 */
    }

    /* 加密 */
    /* 循环条件：str[i] 不等于 '\0' */
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if ((str[i] - 'A' + offset) < M) {
                str[i] = str[i] + offset;
            } else {
                /* 如果向后越界 */
                /* 循环移位 */
                str[i] = str[i] - (M - offset);
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            if ((str[i] - 'a' + offset) < M) {
                str[i] = str[i] + offset;
            } else {
                /* 如果向后越界 */
                /* 循环移位 */
                str[i] = str[i] - (M - offset);
            }
        }
    }

    /* 输出密文字符串 */
    printf("After being encrypted: ");

    /* 循环条件：str[i] 不等于 '\0' */
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    return 0;
}