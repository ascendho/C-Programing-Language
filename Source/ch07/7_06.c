/*【例7-6】调查电视节目欢迎程度。
 * 某电视台要调查观众对该台8个栏目（设相应栏目编号为1~8）的受欢迎情况，共调查了n位观众（1≤n≤1000），
 * 现要求编写程序，输入每一位观众的投票情况（每位观众只能选择一个最喜欢的栏目投票），统计输出各栏目的得票情况。*/

/* 投票情况统计 */
# include<stdio.h>

/* 定义符号常量MAXN */
# define MAXN 8

int main() {
    int i, n, response;

    /* 数组下标对应栏目编号，不使用count[0] */
    int count[MAXN + 1];

    /* 提示输入n */
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= MAXN; i++) {
        /* 各栏目计数器清0 */
        count[i] = 0;
    }

    /* 输入并统计投票数据 */
    for (i = 1; i <= n; i++) {
        /* 输入提示 */
        printf("Enter your response: ");
        scanf("%d", &response);

        if (response >= 1 && response <= MAXN) {        /* 检查投票是否有效*/
            count[response]++;                          /* 对应栏目得票加1 */
        } else {
            printf("invalid: %d\n", response);
        }
    }

    printf("result:\n");

    /* 输出得票数不为零的栏目得票情况 */
    for (i = 1; i <= MAXN; i++) {
        if (count[i] != 0) {
            printf("%4d%4d\n", i, count[i]);
        }
    }

    return 0;
}