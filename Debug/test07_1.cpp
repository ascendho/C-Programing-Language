#include <stdio.h>
#define MAXN 10
int main()
{
	int i, index, j, n, x;
	int a[MAXN];

 	printf("Enter n��");
	scanf("%d", &n);
	printf("Enter %d integers��", n);
	for (i = 0; i < n; i++){	/* ����n����С�����ź�˳������� */
		scanf("%d", &a[i]);
	} 
	printf("Enter x��");
	scanf("%d", &x);
	for (i = 0; i < n; i++) {	/* ��λ���ҵ��������λ�ã����˳�ѭ��ʱi��ֵ */
		if(x < a[i]){
			break;
		}
	}
	index = i;					/* ��λ��index��¼�������λ�� */
	for(j = n-1; j >= index; j++){	/* ��λ����a[n-1]~a[index]���˳��һλ */
		a[j] = a[j+1];
	}
	a[index] = x;				/* ���룺��x��ֵ����a[index] */
	for (i = 0; i <= n; i++){
		printf("%d ", a[i]);
	}	
	printf("\n");

	return 0;
}
