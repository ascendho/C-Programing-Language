/*����10-9������10-7�г���ת���ĺ꣬�����ͷ�ļ�length.h����д���������ļ���*/

#include<stdio.h>
#include "length.h"        /* �����Զ���ͷ�ļ� */

int main() {
    float foot, inch, mile;                                    /* ����Ӣ�Ӣ�ߣ�Ӣ����� */

    printf("Input mile,foot and inch:");
    scanf("%f%f%f", &mile, &foot, &inch);                                        /* �ֱ�����Ӣ�Ӣ�ߣ�Ӣ�� */

    printf("%f miles = %f meters\n", mile, mile * Mile_to_meter);                /* ����Ӣ������� */
    printf("%f feet = %f centimeters\n", foot, foot * Foot_to_centimeter);       /* ����Ӣ�ߵ������� */
    printf("%f inches = %f centimeters\n", inch, inch * Inch_to_centimeter);     /* ����Ӣ��������� */

    return 0;
}