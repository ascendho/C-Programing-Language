/*  常用圆形体的体积计算器，1：计算球体，2：计算圆柱体，3：计算圆锥体 */
#include <stdio.h>
#include <math.h>
#include "test10_1_cal.c" ;    /*  增加文件包含，连接相关函数  */
#include "test10_1_vol.c" ;    /*  增加文件包含，连接相关函数  */
#define  PI  3.141592654
int main(void)
{
    int sel; 

/*  循环选择计算圆形体的体积，直到输入非1～3的数字为止  */
    while(1){			/* 永久循环，通过循环体中 break 语句结束循环 */
		printf("  1-计算球体体积");		
		printf("  2-计算圆柱体体积");
		printf("  3-计算圆锥体体积");
		printf("  其他-退出程序运行\n");
		printf("请输入计算命令：");  	/* 输入提示*/
		scanf("%d", &sel);
		if (sel < 1 || sel > 3){    /* 输入非1～3的数字，循环结束  */
            break;     	
        } else{		          *  输入1～3，调用cal()  */
            cal (sel);
        }
	 }

	 return 0;
}
