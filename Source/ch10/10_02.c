/*【例10-2】用递归函数实现求n！。*/

#include <stdio.h>

double fact(int n);                         /*  函数声明  */
int main() {
    int n;

    scanf("%d", &n);
    printf("%f", fact(n));           /*  函数调用  */

    return 0;
}

double fact(int n)                          /*  函数定义  */
{
    double result;

    if (n == 1 || n == 0) {                 /*  递归出口  */
        result = 1;
    } else {
        result = n * fact(n - 1);        /*	函数递归调用 */
    }

    return result;
}