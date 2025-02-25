/*����11-6��������ơ�
 * һ��ֽ����52�ţ�4�ֻ�ɫ��ÿ�ֻ�ɫ13�š��ó���ģ��������ƹ��̣���52���ư���ת�ķ�ʽ���Ÿ�4�ˣ���������ƽ����*/

/* ������ƣ�ָ���ۺ�Ӧ�ã� */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {        /* �ýṹ��ʾһ���ƣ�����suit�ǻ�ɫ��face�ǵ��� */
    int suit;
    int face;
};

void deal(struct card *wdeck)  /* ���� */
{
    int i, m, t;
    static int temp[52] = {0};            /* ���Ʊ�� 0:δ��  1:�ѷ� */

    srand(time(NULL));        /* �趨������Ĳ�����ϵͳʱ�ӹ��� */
    for (i = 0; i < 52; i++) {
        while (1) {
            m = rand() % 52;            /* ������������һ��0~51֮����� */
            if (temp[m] == 0) {
                break;
            }
        }

        temp[m] = 1;

        /* 4����ת���� */
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

    deal(deck);   /* ���ú�����ʵ�ַ���  */

    for (i = 0; i < 52; i++) {
        if (i % 13 == 0) {
            printf("Player %d:\n", i / 13 + 1);
        }
        printf("%s of %s\n", face[deck[i].face], suit[deck[i].suit]);
    }

    return 0;
}