/*����10-7��ŷ�����ҳ���ʹ��Ӣ�Ƶ�λ����Ӣ�Ӣ�ߡ�Ӣ��ȣ�����1Ӣ��=1609�ף�1Ӣ��=30.48���ף�1Ӣ��=2.54���ס�
 * ���д���������Ӣ��ת�����ף�Ӣ�ߺ�Ӣ��ת�������ס�*/

# include <stdio.h>

# define Mile_to_meter 1609            /*  1Ӣ��=1609��  */
# define Foot_to_centimeter 30.48      /*  1Ӣ��=30.48����  */
# define Inch_to_centimeter  2.54      /*  1Ӣ��=2.54����  */

int main() {
    float foot, inch, mile;                                 /* ����Ӣ�Ӣ�ߣ�Ӣ����� */

    printf("Input mile,foot and inch:");
    scanf("%f%f%f", &mile, &foot, &inch);            /* �ֱ�����Ӣ�Ӣ�ߣ�Ӣ�� */

    printf("%f miles = %f meters\n", mile, mile * Mile_to_meter);               /* ����Ӣ������� */
    printf("%f feet = %f centimeters\n", foot, foot * Foot_to_centimeter);      /* ����Ӣ�ߵ������� */
    printf("%f inches = %f centimeters\n", inch, inch * Inch_to_centimeter);    /* ����Ӣ��������� */

    return 0;
}