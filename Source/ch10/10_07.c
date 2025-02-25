/*【例10-7】欧美国家长度使用英制单位，如英里、英尺、英寸等，其中1英里=1609米，1英尺=30.48厘米，1英寸=2.54厘米。
 * 请编写程序将输入的英里转换成米，英尺和英寸转换成厘米。*/

# include <stdio.h>

# define Mile_to_meter 1609            /*  1英里=1609米  */
# define Foot_to_centimeter 30.48      /*  1英尺=30.48厘米  */
# define Inch_to_centimeter  2.54      /*  1英寸=2.54厘米  */

int main() {
    float foot, inch, mile;                                 /* 定义英里，英尺，英寸变量 */

    printf("Input mile,foot and inch:");
    scanf("%f%f%f", &mile, &foot, &inch);            /* 分别输入英里，英尺，英寸 */

    printf("%f miles = %f meters\n", mile, mile * Mile_to_meter);               /* 计算英里的米数 */
    printf("%f feet = %f centimeters\n", foot, foot * Foot_to_centimeter);      /* 计算英尺的厘米数 */
    printf("%f inches = %f centimeters\n", inch, inch * Inch_to_centimeter);    /* 计算英寸的厘米数 */

    return 0;
}