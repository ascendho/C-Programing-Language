/*【例10-4-3】编写递归函数reverse(int n)实现将整数n逆序输出。*/
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
        result = num;                    /*递归出口*/
    } else {
        result = (num % 10) * mypow(num) + reverse(num / 10);        /*递归调用*/
    }

    return result;
}

int mypow(int num) {
    int result;

    if (num < 10) {
        result = 1;                             /*递归出口*/
    } else {
        result = 10 * mypow(num / 10);    /*递归调用*/
    }

    return result;
}