/*����7-11������һ���Իس���Ϊ������־���ַ�����������80���ַ������жϸ��ַ����Ƿ�Ϊ���ġ�*/

/*�ж��ַ����Ƿ�Ϊ����*/
#include<stdio.h>

# define MAXN 80

int main() {
    int i, k;
    char line[MAXN];

    /* �����ַ��� */
    printf("Entera string: ");      /* ������ʾ */
    k = 0;
    while ((line[k] = getchar()) != '\n') {
        k++;
    }
    line[k] = '\0';

    /* �ж��ַ���line�Ƿ�Ϊ���� */
    i = 0;               /* i���ַ������ַ����±� */
    k = k - 1;            /* k���ַ���β�ַ����±� */
    /* i��k�����±���ַ�����β����ͬʱ���м��ƶ�������ж϶�Ӧ�ַ��Ƿ���� */
    while (i < k) {
        if (line[i] != line[k]) {  /* ����Ӧ�ַ�����ȣ�����ǰ����ѭ��*/
            break;
        }
        i++;
        k--;
    }

    if (i >= k) {            /*�ж�forѭ���Ƿ�����������������˵���ַ����ǻ��� */
        printf("It is a plalindrome\n");
    } else {                 /* forѭ��������������˵����Ӧ�ַ����� */
        printf("It is not a plalindrome\n");
    }

    return 0;
}