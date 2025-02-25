/* 【例12-3】复制用户信息文件。将例12-2的用户信息文件f12-2.txt文件备份一份，取名为文件f12-3.txt。
 * 说明：将文件f12-2.txt与源程序放在同一目录下，执行程序。 */

/* 复制用户信息文件 */
#include <stdio.h>
#include <process.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    /*打开文件，读出数据*/
    if ((fp1 = fopen("f12-2.txt", "r")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*打开文件，写入数据*/
    if ((fp2 = fopen("f12-3.txt", "w")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*复制数据，从文件1读取，写入文件2 */
    while (!feof(fp1)) {
        ch = fgetc(fp1);                /*从fp1所指示的文件中读取一个字符*/
        if (ch != EOF) fputc(ch, fp2);    /*将字符ch写入fp2指示的文件*/
    }
    /*关闭文件f12-2.txt */
    if (fclose(fp1)) {
        printf("Can not close the file!\n");
        exit(0);
    }
    /*关闭文件f12-3.txt */
    if (fclose(fp2)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}