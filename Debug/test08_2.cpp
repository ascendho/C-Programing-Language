#include <stdio.h>
void mov(int *x, int n, int m);
int main(void)
{
	int a[80], i, m, n, *p;
	
	printf("Enter n, m:");
	scanf("%d%d", &n, &m);
	for(p = a, i = 0; i < n; i++) {
		scanf("%d", &p++);
    }
	mov(a, n, m);
	printf("After moved: ");
	for(i = 0; i < n; i++) {
		printf("%5d", a[i]);
    }

	return 0;
}
void mov(int *a, int n, int m)
{
	int i, j, temp;

    m = m % n;
	for(i = 0; i < m; i++){

		for(j = n-1; j > 0; j--){
			a[j] = a[j - 1]; 		
        }
		a[0] = a[n - 1]; 
	}
}
