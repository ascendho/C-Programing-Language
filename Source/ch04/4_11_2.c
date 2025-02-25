/*【例4-11-2】搬砖问题。某工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬1块。
 * 如果想用n人正好搬n块砖，问有那些搬法？*/

/* n人正好搬n块砖，程序版本2，二重循环 */
# include <stdio.h>

int main() {
    int children, cnt, limit_m, limit_w, men, n, women;

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);

    limit_m = n / 3;
    limit_w = n / 2;
    cnt = 0;

    for (men = 0; men <= limit_m; men++) {
        for (women = 0; women <= limit_w; women++) {
            children = n - men - women;
            if ((men * 3 + women * 2 + children * 0.5 == n)) {
                printf("men=%d, women=%d, children=%d\n", men, women, children);
                cnt++;
            }
        }
    }

    if (cnt == 0) {
        printf("None\n");
    }

    return 0;
}