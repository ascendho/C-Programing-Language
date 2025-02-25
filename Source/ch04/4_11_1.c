/*【例4-11-1】搬砖问题。某工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬1块。
 * 如果想用n人正好搬n块砖，问有那些搬法？*/

/* n人正好搬n块砖，程序版本1 三重循环*/
# include <stdio.h>

int main() {
    int children, cnt, men, n, women;

    /* 输入提示 */
    printf("Enter n: ");
    scanf("%d", &n);

    cnt = 0;

    for (men = 0; men <= n; men++) {
        for (women = 0; women <= n; women++) {
            for (children = 0; children <= n; children++) {
                if ((men + women + children == n) && (men * 3 + women * 2 + children * 0.5 == n)) {
                    printf("men=%d, women=%d, children=%d\n", men, women, children);
                    cnt++;
                }
            }
        }
    }

    if (cnt == 0) {
        printf("None\n");
    }

    return 0;
}