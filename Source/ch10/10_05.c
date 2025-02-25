/*����10-4����ŵ��Hanoi�������⡣
 * �Ŵ�ĳ��������һ��������������3����A��B��C����A�Ϸ���64����С���ȵ��̣����д������£�С�����ϡ�
 * ��һ�����������64 ���̴���A�ᵽ��B����һ��ֻ�ܰ�һ���̣��ᶯ����ֻ������������������ϣ��Ҵ��̲���ѹ��С���ϡ�
 * ��Ҫ���ó���ģ��ù��̣�������ᶯ���衣*/

# include <stdio.h>

void hanio(int n, char a, char b, char c);          /* ��������  */

int main() {
    int n;

    printf("input the number of disk: ");
    scanf("%d", &n);
    printf("the steps for %d disk are:\n", n);

    hanio(n, 'a', 'b', 'c');

    return 0;
}

/* �ᶯn���̣���a��b��cΪ�м����  */
void hanio(int n, char a, char b, char c) {
    if (n == 1) {
        printf("%c-->%c\n", a, b);
    } else {
        hanio(n - 1, a, c, b);
        printf("%c-->%c\n", a, b);
        hanio(n - 1, c, b, a);
    }
}