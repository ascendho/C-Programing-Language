/*【例11-6】随机发牌。
 * 一副纸牌有52张，4种花色，每种花色13张。用程序模拟随机发牌过程，将52张牌按轮转的方式发放给4人，并输出发牌结果。*/

/* 随机发牌（指针综合应用） */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {        /* 用结构表示一张牌，其中suit是花色，face是点数 */
    int suit;
    int face;
};

void deal(struct card *wdeck)  /* 发牌 */
{
    int i, m, t;
    static int temp[52] = {0};            /* 发牌标记 0:未发  1:已发 */

    srand(time(NULL));        /* 设定随机数的产生与系统时钟关联 */
    for (i = 0; i < 52; i++) {
        while (1) {
            m = rand() % 52;            /* 计算机随机产生一个0~51之间的数 */
            if (temp[m] == 0) {
                break;
            }
        }

        temp[m] = 1;

        /* 4人轮转发牌 */
        t = (i % 4) * 13 + (i / 4);
        wdeck[t].suit = m / 13;
        wdeck[t].face = m % 13;
    }
}

int main() {
    int i;
    struct card deck[52];
    const char *suit[] = {"Heart", "Diamond", "Club", "Spade"};
    const char *face[] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};

    deal(deck);   /* 调用函数，实现发牌  */

    for (i = 0; i < 52; i++) {
        if (i % 13 == 0) {
            printf("Player %d:\n", i / 13 + 1);
        }
        printf("%s of %s\n", face[deck[i].face], suit[deck[i].suit]);
    }

    return 0;
}