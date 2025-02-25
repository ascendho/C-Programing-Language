/* 【例12-5】编程实现以二进制方式读写用户信息文件f12-5.txt，将5位用户信息(用户名和密码，
 * 密码要求经过例12-2的encrypt()函数加密)写入文件，然后读出所有用户信息显示到屏幕。 */

/* 二进制方式读写用户信息文件 */
#include <stdio.h>
#include <string.h>
#include<process.h>

#define SIZE 5  /*用户个数*/

struct sysuser { /*用户信息结构体*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int main() {
    FILE *fp;   /*1.定义文件指针*/
    int i;
    struct sysuser u[SIZE], su[SIZE], *pu = u, *psu = su;

    /*2.打开文件，建立二进制文件进行读/写方式*/
    if ((fp = fopen("f12-5.txt", "wb+")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*3.输入SIZE个用户信息，并对密码加密，保存到结构体数组u */
    for (i = 0; i < SIZE; i++, pu++) {
        printf("Enter %i th sysuser(name password):", i);
        scanf("%s%s", pu->username, pu->password);  /*输入用户名和密码*/
        encrypt(pu->password);    /*调用加密算法对密码进行加密处理*/
    }
    pu = u;
    fwrite(pu, sizeof(struct sysuser), SIZE, fp);    /*写入二进制文件*/
    rewind(fp);                                    /*将指针重新定位到文件首*/
    fread(psu, sizeof(struct sysuser), SIZE, fp);        /*读取SIZE条数据到psu指向的结构数组*/
    for (i = 0; i < SIZE; i++, psu++)
        printf("%s\t%s\n", psu->username, psu->password);
    /*关闭文件*/
    if (fclose(fp)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/*加密函数，对pwd进行加密处理*/
void encrypt(char *pwd) {
    int i;

    /*与15异或，实现低四位取反，高四位保持不变*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}