/* ����8-5��ð������
 * ����n���������������Ǵ�С��������������Ҫ��ʹ��ð�������㷨��*/

/*  ð�������㷨 */
#include <stdio.h>

#define MAXN 10

void swap(int *px, int *py);

void bubble(int a[], int n);

int main() {
    int n, a[MAXN];
    int i;

    /* ��ʾ����n */
    printf("Enter n (n<=10): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    /* ��ʾ����n���� */
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubble(a, n);

    printf("After sorted: ");

    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }

    return 0;
}

void swap(int *px, int *py) {
    int t;

    t = *px;
    *px = *py;
    *py = t;
}

/* n������a�д�����Ԫ�ص����� */
void bubble(int a[], int n)
{
    int i, j, t;

    for (i = 1; i < n; i++) {                     /*  �ⲿѭ��  */
        for (j = 0; j < n - i; j++) {             /*  �ڲ�ѭ��  */
            /*  �Ƚ���������Ԫ�صĴ�С  */
            if (a[j] > a[j + 1]) {

                /*  ���ú���swap()ʵ�ֽ���a[j]��a[j+1]��ֵ */
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}