/*【例3-10】输入一个正整数n，再输入n个字符，分别统计出其中空格或回车、数字字符和其他字符的个数。
 * 要求使用switch语句编写 */

/* 统计字符，包括空格或回车、数字字符和其他字符 */
# include <stdio.h>

int main() {
    /* 定义3个变量分别存放统计结果 */
    int blank, digit, i, n, other;
    char ch;

    /* 置存放统计结果的3个变量的初值为零 */
    blank = digit = other = 0;

    /* 提示输入n */
    printf("Enter n:");
    scanf("%d", &n);

    /* 读入并舍弃换行符 */
    getchar();

    /* 提示输入n个字符 */
    printf("Enter %d characters:", n);

    for (i = 1; i <= n; i++) {            /* 循环执行了n次 */
        ch = getchar();                   /* 输入一个字符 */

        /* 在switch语句中灵活应用break */
        switch (ch) {
            case ' ':            /* 语句段为空，请注意空格符的表示方式 */
            case '\n':
                blank++;         /* 2个常量表达式 ' ' 和 '\n' 共用该语句段 */
                break;           /* 跳出switch语句 */
            case '0' :
            case '1' :
            case '2' :
            case '3' :
            case '4' :
            case '5' :
            case '6' :
            case '7' :
            case '8' :
            case '9' :
                digit++;            /* 10个常量表达式 '0' ～ '9' 共用该语句段*/
                break;              /* 跳出switch语句 */
            default:
                other++;            /* 累加其他字符 */
                break;              /* 跳出switch语句 */
        }
    }

    printf("blank = %d, digit = %d, other = %d\n", blank, digit, other);

    return 0;
}