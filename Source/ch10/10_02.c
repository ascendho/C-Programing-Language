/*����10-2���õݹ麯��ʵ����n����*/

#include <stdio.h>

double fact(int n);                         /*  ��������  */
int main() {
    int n;

    scanf("%d", &n);
    printf("%f", fact(n));           /*  ��������  */

    return 0;
}

double fact(int n)                          /*  ��������  */
{
    double result;

    if (n == 1 || n == 0) {                 /*  �ݹ����  */
        result = 1;
    } else {
        result = n * fact(n - 1);        /*	�����ݹ���� */
    }

    return result;
}