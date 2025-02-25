/*����10-4-3����д�ݹ麯��reverse(int n)ʵ�ֽ�����n���������*/
#include <stdio.h>

int reverse(int n);

int mypow(int num);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", mypow(n));

    printf("%d", reverse(n));
    printf("\n");

    return 0;
}

int reverse(int num) {
    int result;

    if (num < 10) {
        result = num;                    /*�ݹ����*/
    } else {
        result = (num % 10) * mypow(num) + reverse(num / 10);        /*�ݹ����*/
    }

    return result;
}

int mypow(int num) {
    int result;

    if (num < 10) {
        result = 1;                             /*�ݹ����*/
    } else {
        result = 10 * mypow(num / 10);    /*�ݹ����*/
    }

    return result;
}