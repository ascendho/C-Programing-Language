# include <stdio.h>

# define MAXLINE 80

int main() {
    int i, k, number;
    char hexad[MAXLINE], str[MAXLINE];

    i = 0;

    while ((str[i] = getchar()) != '#') {
        i++;
    }

    /* 将字符串结束符 '\0' 存入数组str */
    str[i] = '\0';

    i = 0;
    k = 0;

    int flag = 1;

    // 过滤掉非16进制的字符
    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')) {

            hexad[k] = str[i];
            k++;
        }

        // 在第一个16进制字符之前出现”-“
        if (str[i] == '-' && 0 == k)
            flag = -1;

        i++;
    }

    hexad[k] = '\0';

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

    printf("%d\n", flag * number);

    return 0;
}