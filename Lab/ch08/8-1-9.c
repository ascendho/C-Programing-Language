# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, i;
    float *p, sum, max, min, avg;

    scanf("%d", &n);

    /* 为数组 p 动态分配 n 个浮点数 float 类型大小的空间 */
    if ((p = (float *) calloc(n, sizeof(float))) == NULL) {
        printf("Not able to allocate memory. \n");
        exit(1);
    }

    sum = 0.0;

    /* 初始化 */
    max = -1;
    min = 1000;

    /* 提示输入 n 个整数 */
    for (i = 0; i < n; i++) {
        scanf("%f", p + i);
        sum = sum + *(p + i);
        if (min > *(p + i)) min = *(p + i);
        if (max < *(p + i)) max = *(p + i);
    }

    avg = sum / n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f\n", avg, max, min);

    /* 释放动态分配的空间 */
    free(p);

    return 0;
}