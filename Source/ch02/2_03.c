/*【例2-3】求华氏温度 100°F 对应的摄氏温度。计算公式：c=5*(f-32)/9，式中：c表示摄氏温度，f表示华氏温度 */

/* 将华氏温度转换为摄氏温度 */
#include <stdio.h>

int main() {
    /* 定义两个整型变量，celsius表示摄氏度，fahr表示华氏度 */
    int celsius, fahr;

    /* 空行，用于分隔变量定义和可执行语句 */
    fahr = 100;                           /* 对变量fahr 赋值 */
    celsius = 5 * (fahr - 32) / 9;        /* 温度转换计算 */

    /* 调用printf函数输出结果 */
    printf("fahr = %d, celsius = %d\n", fahr, celsius);

    return 0;
}