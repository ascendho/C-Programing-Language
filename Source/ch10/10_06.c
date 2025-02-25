/*����10-6�����η���������⣺�ϰ���һ����飨��n�飬2��n��100����
 * ����������Ĺ�Աÿ�˿��Եõ����е�һ�飬������һ�ĵõ����صĽ�飬�����ڶ�����õ�����������Ľ�顣
 * ����n��n���������÷��η�������ؽ��������顣*/

# include <stdio.h>

#define MAXN 101

int max(int a[], int m, int n);

int min(int a[], int m, int n);

int main() {
    int i, n;
    int a[MAXN];

    printf("Enter n: ");                    /* ��ʾ����n */
    scanf("%d", &n);

    if (n >= 2 && n <= MAXN - 1) {
        printf("Enter %d integers: ", n);   /* ��ʾ����n���� */
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("max = %d\n", max(a, 0, n - 1));
        printf("min = %d\n", min(a, 0, n - 1));
    } else {
        printf("Invalid Value.\n");        /* ���������ʾ */
    }

    return 0;
}

/* ���η���a[m]~a[n]�����ֵ�ĵݹ麯�� */
int max(int a[], int m, int n) {
    int k, u, v;

    if (m == n) {            /* ����a��ֻ��1��Ԫ�أ��������ֵa[m] */
        return a[m];
    }

    k = (m + n) / 2;             /* �����м�Ԫ�ص��±�k */
    u = max(a, m, k);         /* �ݹ���ú���max()����a[m]~a[k]���ҳ����ֵ����u */
    v = max(a, k + 1, n);    /* �ݹ���ú���max()����a[k+1]~a[n]���ҳ����ֵ����v */

    return (u > v) ? u : v;      /* �Ƚ�u��v���������нϴ��ֵ */
}

/* ���η���a[m]~a[n]����Сֵ�ĵݹ麯�� */
int min(int a[], int m, int n) {
    int k, u, v;

    if (m == n) {           /* ����a��ֻ��1��Ԫ�أ�������Сֵa[m] */
        return a[m];
    }
    k = (m + n) / 2;        /* �����м�Ԫ�ص��±�k */
    u = min(a, m, k);         /* �ݹ���ú���min()����a[m]~a[k]���ҳ���Сֵ����u */
    v = min(a, k + 1, n);    /* �ݹ���ú���min()����a[k+1]~a[n]���ҳ���Сֵ����v */

    return (u < v) ? u : v;      /* �Ƚ�u��v���������нϴ��ֵ */
}