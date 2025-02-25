/*【例10-4-1】编写递归函数reverse(int n)实现将整数n逆序输出。*/

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
        printf("%d", num);           /*递归出口*/
    } else {
        printf("%d", num % 10);
        reverse(num / 10);            /*递归调用*/
    }
}