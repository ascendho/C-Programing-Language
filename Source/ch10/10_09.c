/*【例10-9】将例10-7中长度转换的宏，定义成头文件length.h，并写出主函数文件。*/

#include<stdio.h>
#include "length.h"        /* 包含自定义头文件 */

int main() {
    float foot, inch, mile;                                    /* 定义英里，英尺，英寸变量 */

    printf("Input mile,foot and inch:");
    scanf("%f%f%f", &mile, &foot, &inch);                                        /* 分别输入英里，英尺，英寸 */

    printf("%f miles = %f meters\n", mile, mile * Mile_to_meter);                /* 计算英里的米数 */
    printf("%f feet = %f centimeters\n", foot, foot * Foot_to_centimeter);       /* 计算英尺的厘米数 */
    printf("%f inches = %f centimeters\n", inch, inch * Inch_to_centimeter);     /* 计算英寸的厘米数 */

    return 0;
}