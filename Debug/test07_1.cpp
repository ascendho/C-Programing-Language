#include <stdio.h>
#define MAXN 10
int main()
{
	int i, index, j, n, x;
	int a[MAXN];

 	printf("Enter n：");
	scanf("%d", &n);
	printf("Enter %d integers：", n);
	for (i = 0; i < n; i++){	/* 输入n个从小到大排好顺序的整数 */
		scanf("%d", &a[i]);
	} 
	printf("Enter x：");
	scanf("%d", &x);
	for (i = 0; i < n; i++) {	/* 找位：找到待插入的位置，即退出循环时i的值 */
		if(x < a[i]){
			break;
		}
	}
	index = i;					/* 定位：index记录待插入的位置 */
	for(j = n-1; j >= index; j++){	/* 腾位：将a[n-1]~a[index]向后顺移一位 */
		a[j] = a[j+1];
	}
	a[index] = x;				/* 插入：将x的值赋给a[index] */
	for (i = 0; i <= n; i++){
		printf("%d ", a[i]);
	}	
	printf("\n");

	return 0;
}
