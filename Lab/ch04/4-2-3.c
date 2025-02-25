# include <stdio.h>

int main() {
    int money, n1, n2, n5;   /* n1, n2, n5分别表示1分、2分和5分硬币的数量*/

    scanf("%d", &money);

    int count = 0;

    for (n5 = money / 5; n5 >= 1; n5--) {
        for (n2 = (money - n5 * 5) / 2; n2 >= 1; n2--) {
            for (n1 = money - n5 * 5 - n2 * 2; n1 >= 1; n1--) {
                if ((n5 * 5 + n2 * 2 + n1) == money) {        /* 找到满足条件的解 */
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", n5, n2, n1, n1 + n2 + n5);
                    count++;
                }
            }
        }
    }

    printf("count = %d", count);

    return 0;
}