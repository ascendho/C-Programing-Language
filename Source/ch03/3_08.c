/*【例3-8】查询自动售货机中商品的价格。假设自动售货机出售4种商品：薯片(crisps)、爆米花(popcorn)、巧克力(chocolate)和可乐(cola)，售价分别是每份3.0、2.5、4.0和3.5元
 * 用户可以连续查询商品的价格，当查询次数超过5次时，自动退出查询；不到5次时，用户可以选择退出。当用户输入编号1～4，显示相应商品的价格（保留1位小数）；输入0，退出查询；输入其他编号，显示价格为0 */

/* 查询自动售货机中商品的价格 */
# include <stdio.h>

int main() {
    int choice, i;
    double price;

    /* 以下5行显示菜单 */
    printf("[1] Select crisps\n");     /* 查询薯片价格 */
    printf("[2] Select popcorn\n");    /* 查询爆米花价格 */
    printf("[3] Select chocolate\n");  /* 查询巧克力价格 */
    printf("[4] Select cola\n");       /* 查询可乐价格 */
    printf("[0] exit \n");             /* 退出查询 */


    for (i = 1; i <= 5; i++) {                  /* for 的循环体语句开始 */
        /* 输入提示 */
        printf("Enter choice: ");

        /* 接受用户输入的编号 */
        scanf("%d", &choice);

        /* 如果输入0，提前结束 for 循环 */
        if (choice == 0) {
            break;                              /* 此处用 break 跳出 for 循环 */
        }

        /* 根据输入的编号，将相应的价格赋给price */
        switch (choice) {
            case 1:
                price = 3.0;
                break;  /* 用break跳出switch语句，下同 */
            case 2:
                price = 2.5;
                break;
            case 3:
                price = 4.0;
                break;
            case 4:
                price = 3.5;
                break;
            default:
                price = 0.0;
                break;
        }
        /* 输出商品的价格 */
        printf("price = %0.1f\n", price);
    }

    /* 结束查询，谢谢用户使用 */
    printf("Thanks\n");

    return 0;
}