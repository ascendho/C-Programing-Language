/*����12-1����2��ʼ�����ҳ�500������������Щ���������ı��ļ�prime.txt�С�*/

/* ���������ļ�*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n);            /* ��5-5�к���prime()������  */

int main() {
    FILE *fp;               /* 1.�����ļ�ָ�� */
    int n = 2, count = 0;

    if ((fp = fopen("prime.txt", "w")) == NULL) {   /* 2.���ļ� */
        printf("File open error!\n");
        exit(0);
    }

    while (count < 500) {
        if (prime(n) != 0) {
            count++;
            fprintf(fp, "%d ", n);     /* 3.�ļ�����(д��) */
        }
        n++;
    }
    if (fclose(fp)) {         /* 4.�ر��ļ� */
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/* �ж������ĺ��� */
int prime(int m) {
    int i, limit;

    if (m <= 1) {                /* С�ڵ���1������������ */
        return 0;
    } else if (m == 2) {            /* 2������ */
        return 1;
    } else {                    /* �������������2�������� */
        limit = sqrt(m) + 1;
        for (i = 2; i <= limit; i++) {
            if (m % i == 0) {
                return 0;      /* ��m�ܱ�ĳ��i��������m��������������0 */
            }
        }
/* ��ѭ������������˵��m���ܱ��κ�һ��i��������m������������1 */
        return 1;
    }
}