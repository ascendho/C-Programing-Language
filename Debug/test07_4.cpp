# include <stdio.h>
# define MAXN 6
int main() 
{
	int i, j, m, n;
    int a[MAXN][MAXN], b[MAXN][MAXN];
    
	printf("Enter m, n:");
    scanf("%d%d", &m, &n);
    printf("Enter array:\n");
    for (i = 0; j < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    m = m % n;
    for (j = 0; j < n; j++) {     
        for (i = 0; i < n; i++) {
        	b[i][(j+m)/n] = a[i][j];
        }
    }  
    printf("New array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
