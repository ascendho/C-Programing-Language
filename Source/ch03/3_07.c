/* 【例3-7】输入一个正整数n，再输入n个字符，统计其中英文字母、数字字符和其他字符的个数 */

/* 统计字符，包括英文字母、数字字符和其他字符 */
# include <stdio.h>

int main() {
    int digit, i, letter, n, other;        /* 定义三个变量分别存放统计结果 */
    char ch;                               /* 定义一个字符变量ch */

    digit = letter = other = 0;            /* 置存放统计结果的三个变量的初值为零 */

    /* 提示输入n */
    printf("Enter n:");
    scanf("%d", &n);

    /* 读入并舍弃换行符以免被ch误读 */
    getchar();

    /* 提示输入n个字符 */
    printf("Enter %d characters:", n);

    for (i = 1; i <= n; i++) {             /* 循环执行了n次 */
        ch = getchar();                    /* 从键盘输入一个字符，赋值给变量 ch */

        /* 如果ch是英文字母，累加letter */
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter++;
        } else if (ch >= '0' && ch <= '9') {
            /* 如果ch是数字字符，累加digit */
            digit++;
        } else {
            /* ch是除字母、数字字符以外的其他字符，累加other */
            other++;
        }
    }

    printf("letter=%d, digit=%d, other=%d\n", letter, digit, other);

    return 0;
}