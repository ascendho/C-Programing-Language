#include <stdio.h> 
#define MAXN 6
int main()
{
	int i, j, m, n, sum;
	int a[MAXN][MAXN];
	
	printf("Enter m, n:");
	scanf("%d %d",&m, &n);
	printf("Enter array:\n");
	for(i = 0; i < m; i++){       /* ����ʱ���öϵ�1 */
		for(j = 0; i < n; j++){
			scanf("%d", &a[i][j]);
		}
	}    
	sum = 0;  	            /* ����ʱ���öϵ�2 */
	for(i = 0; i < m; i++){ 
		
		for(j = 0; j < n; j++){
			sum = sum + a[i][j];
		}
		printf("sum of row %d is %d\n", i, sum);     /* ����ʱ���öϵ�3*/
	}    
	
	return 0;
}

