/*【例10-4】汉诺（Hanoi）塔问题。
 * 古代某寺庙中有一个梵塔，塔内有3个座A、B和C，座A上放着64个大小不等的盘，其中大盘在下，小盘在上。
 * 有一个和尚想把这64 个盘从座A搬到座B，但一次只能搬一个盘，搬动的盘只允许放在其他两个座上，且大盘不能压在小盘上。
 * 现要求用程序模拟该过程，并输出搬动步骤。*/

# include <stdio.h>

void hanio(int n, char a, char b, char c);          /* 函数声明  */

int main() {
    int n;

    printf("input the number of disk: ");
    scanf("%d", &n);
    printf("the steps for %d disk are:\n", n);

    hanio(n, 'a', 'b', 'c');

    return 0;
}

/* 搬动n个盘，从a到b，c为中间过渡  */
void hanio(int n, char a, char b, char c) {
    if (n == 1) {
        printf("%c-->%c\n", a, b);
    } else {
        hanio(n - 1, a, c, b);
        printf("%c-->%c\n", a, b);
        hanio(n - 1, c, b, a);
    }
}