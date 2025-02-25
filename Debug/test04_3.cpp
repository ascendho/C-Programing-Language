#include<stdio.h>
int main(void)
{
	double e,item;
	int i, j, n;

	printf("Enter n: ");
	scanf("%d", &n);
	e = 0;
	item = 1;
	for(i = 1; i <= n; i++) {
                             
		for(j = 1; j <= n; j++)
			item = item * j;      
		e = e + 1.0 / item;      /* 调试时设置断点1 */
	}
	printf("e = %.4f\n", e);     /* 调试时设置断点2 */

	return 0;
}
