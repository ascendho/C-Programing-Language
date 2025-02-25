#include<stdio.h>
#include<limits.h>

#define ROW 6
#define COL 6

int main() {
    int n;
    scanf("%d", &n);

    int M[ROW][COL];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &M[i][j]);

    int maxInRow = INT_MIN, indexRow = -1, indexCol = -1, flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] >= maxInRow) {
                maxInRow = M[i][j];
                indexRow = i;
                indexCol = j;
            }
        }

        for (int k = 0; k < n; k++) {
            if (M[k][indexCol] < maxInRow) {
                maxInRow = INT_MIN;
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("%d %d", indexRow, indexCol);
            return 0;
        } else
            flag = 1;
    }

    printf("NONE");

    return 0;
}