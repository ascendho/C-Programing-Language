#include<stdio.h>

#define ROW 10
#define COL 10

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int dim;
        scanf("%d", &dim);

        int m[ROW][COL], flag = 1;

        for (int i = 0; i < dim; i++)
            for (int j = 0; j < dim; j++) {
                scanf("%d", &m[i][j]);
                if (i > j && m[i][j] != 0)
                    flag = 0;
            }

        if (1 == flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}