/*【例12-1】从2开始依次找出500个素数，将这些素数存入文本文件prime.txt中。*/

/* 生成素数文件*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n);            /* 例5-5中函数prime()的声明  */

int main() {
    FILE *fp;               /* 1.定义文件指针 */
    int n = 2, count = 0;

    if ((fp = fopen("prime.txt", "w")) == NULL) {   /* 2.打开文件 */
        printf("File open error!\n");
        exit(0);
    }

    while (count < 500) {
        if (prime(n) != 0) {
            count++;
            fprintf(fp, "%d ", n);     /* 3.文件处理(写入) */
        }
        n++;
    }
    if (fclose(fp)) {         /* 4.关闭文件 */
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/* 判断素数的函数 */
int prime(int m) {
    int i, limit;

    if (m <= 1) {                /* 小于等于1的数不是素数 */
        return 0;
    } else if (m == 2) {            /* 2是素数 */
        return 1;
    } else {                    /* 其他情况：大于2的正整数 */
        limit = sqrt(m) + 1;
        for (i = 2; i <= limit; i++) {
            if (m % i == 0) {
                return 0;      /* 若m能被某个i整除，则m不是素数，返回0 */
            }
        }
/* 若循环正常结束，说明m不能被任何一个i整除，则m是素数，返回1 */
        return 1;
    }
}