#include <stdio.h>
int main(void)
{
	int a[10], i, n, max, *p;
	
	printf("Enter n:");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
	  scanf("%d", &a[i]);
    }
	*p = a;         /* ָ��pָ��������Ԫ�� */
    max = a[0];
    while(p < a+n) {  /* ����ʱ���öϵ� */
		if(*p > max) {
		    max = p;
		}
		p = p + sizeof(int);
	}
	printf("max = %d\n", max);

	return 0;
}

