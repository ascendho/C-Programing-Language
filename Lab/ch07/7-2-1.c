#include<stdio.h>

#define ROW 6
#define COL 6

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int M[ROW][COL], sumOfRow = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &M[i][j]);
            sumOfRow += M[i][j];
        }

        char ch;
        if (i == m - 1)
            ch = '\0';
        else
            ch = '\n';

        printf("%d%c", sumOfRow, ch);
        sumOfRow = 0;
    }

    return 0;
}