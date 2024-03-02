/*【例4-12】找零钱问题。有足够数量的5分、2分和1分的硬币，现在要用这些硬币来支付一笔小于1元的零钱money，问至少要用多少个硬币？输入零钱，输出硬币的总数量和相应面额的硬币数量。
为了满足硬币总数最小的要求，优先考虑使用面值大的硬币，即按照5分、2分和1分的顺序，分别从取值范围的上限到下限，采用三重循环嵌套，找出满足条件的解。
*/

/* 找零钱 */
# include <stdio.h>

int main(void) {
    int flag, money, n1, n2, n5;   /* n1, n2, n5分别表示1分、2分和5分硬币的数量*/

    flag = 1;                      /* flag表示是否找到满足条件的解并中止嵌套循环 */
    printf("Enter money: ");    /* 输入提示 */

    scanf("%d", &money);

    for (n5 = money / 5; (n5 >= 0) && (flag == 1); n5--) {
        for (n2 = (money - n5 * 5) / 2; (n2 >= 0) && (flag == 1); n2--) {
            for (n1 = money - n5 * 5 - n2 * 2; (n1 >= 0) && (flag == 1); n1--) {
                if ((n5 * 5 + n2 * 2 + n1) == money) {        /* 找到满足条件的解 */
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", n5, n2, n1, n1 + n2 + n5);
                    flag = 0;    /* 置flag为 0，则三重循环的条件都不满足，中止嵌套循环 */
                }
            }
        }
    }

    return 0;
}