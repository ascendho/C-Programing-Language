#include <stdio.h>

int main() {
    int n, m, t, flag, index;
    static int a[100][2];

    scanf("%d", &n);
    t = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &m);
        flag = 0;

        for (int j = 0; j < t; j++)
            if (a[j][0] == m) {
                flag = 1;
                a[j][1]++;
            }

        if (flag == 0) {
            a[t][1] = 1;
            a[t++][0] = m;
        }
    }

    index = 0;
    for (int i = 1; i < t; i++)
        if (a[i][1] > a[index][1]) index = i;

    printf("%d %d", a[index][0], a[index][1]);

    return 0;
}