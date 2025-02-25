#include <stdio.h>
int main(void)
{
	int a[10], i, n, max, *p;
	
	printf("Enter n:");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
	  scanf("%d", &a[i]);
    }
	*p = a;         /* 指针p指向数组首元素 */
    max = a[0];
    while(p < a+n) {  /* 调试时设置断点 */
		if(*p > max) {
		    max = p;
		}
		p = p + sizeof(int);
	}
	printf("max = %d\n", max);

	return 0;
}

