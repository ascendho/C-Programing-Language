/*����11-7����дC����echo�������������в�����ͬһ���������*/

/* ��ʾ���е������в���  */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int k;

    for (k = 1; k < argc; k++) {          /* �ӵ�1�������в�����ʼ */
        printf("%s ", argv[k]);    /* ��������в��� */
    }

    printf("\n");

    return 0;
}