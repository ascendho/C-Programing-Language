/*【例7-14】十六进制字符串转换成十进制非负整数。输入一个以'#'为结束标志的字符串（少于10个字符），
 * 滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，输出该字符串并将其转换为十进制数后输出。
*/

/* 十六进制字符串转换成十进制非负整数 */
# include <stdio.h>

/* 定义符号常量MAXLINE */
# define MAXLINE 80

int main() {
    int i, k, number;
    char hexad[MAXLINE], str[MAXLINE];

    /* 输入字符串 */
    /* 提示输入字符串 */
    printf("Enter a string: ");

    i = 0;

    /* 输入结束符为 '#' */
    while ((str[i] = getchar()) != '#') {
        i++;
    }

    /* 将字符串结束符 '\0' 存入数组str */
    str[i] = '\0';

    /* 滤去非十六进制字符后生成新字符串hexad */

    // 重置i值
    i = 0;

    /* k：新字符串hexad的下标 */
    k = 0;

    // 过滤掉非16进制的字符
    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')) {

            /* 将十六进制字符放入新字符串 */
            hexad[k] = str[i];
            k++;
        }

        i++;
    }

    /* 新字符串结束标记 */
    hexad[k] = '\0';

    /* 输出十六进制新字符串 */
    printf("New string: ");

    for (i = 0; hexad[i] != '\0'; i++) {
        putchar(hexad[i]);
    }

    printf("\n");

    /* 转换为十进制整数 */
    /* 存放十进制数，先清0 */
    number = 0;

    /* 逐个转换 */
    for (i = 0; hexad[i] != '\0'; i++) {
        if (hexad[i] >= '0' && hexad[i] <= '9') {
            number = number * 16 + hexad[i] - '0';
        } else if (hexad[i] >= 'A' && hexad[i] <= 'F') {
            number = number * 16 + hexad[i] - 'A' + 10;
        } else if (hexad[i] >= 'a' && hexad[i] <= 'f') {
            number = number * 16 + hexad[i] - 'a' + 10;
        }
    }

    /* 输出十进制值 */
    printf("Number = %d\n", number);

    return 0;
}