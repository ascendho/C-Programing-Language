/* ����8-1������ָ��ģ�����뿪����Ϸ */

/*  ��ȡ��������ַ��� */
#include <stdio.h>

int main() {
    int x = 5342;       /* ����x���ڴ������ֵ5342 */
    int *p = NULL;      /* ��������ָ�����p��NULLֵΪ0�������ָ�� */

    p = &x;             /*������x�ĵ�ַ�洢��p�� */

    /* ͨ��������x�������ֵ*/
    printf("If I know the name of the variable, I can get it's value by name: %d\n ", x);

    /* ͨ������x�ĵ�ַ�������ֵ */
    printf("If I know the address of the variable is: %x, then I also can get it's value by address: %d\n", p, *p);

    return 0;
}