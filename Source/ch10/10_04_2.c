/*����10-4-2����д�ݹ麯��reverse(int n)ʵ�ֽ�����n˳�������*/
#include <stdio.h>

void reverse(int n);

int main() {
    int n;

    scanf("%d", &n);
    reverse(n);
    printf("\n");

    return 0;
}

void reverse(int num) {
    if (num < 10) {
        printf("%d", num);        /*�ݹ����*/
    } else {
        reverse(num / 10);          /*�ݹ����*/
        printf("%d", num % 10);
    }
}