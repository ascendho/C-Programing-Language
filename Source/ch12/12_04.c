/* 【例12-4】例12-2的f12-2.txt文件保存着系统用户信息，编写一个函数checkUserValid()用于登录系统时校验用户的合法性。
 * 检查方法是在程序运行时输入用户名和密码，然后在文件中查找该用户信息，如果用户名和密码在文件中找到，则表示用户合法，返回1，否则返回0。
 * 程序运行时，输入一个用户名和密码，调用checkUserValid()函数，如果返回1，则提示"Valid user!"，否则输出"Invalid user!"。 */

/*用户合法性校验*/
#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <string.h>

struct sysuser {                   /*定义系统用户信息结构*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int checkUserValid(struct sysuser *psu);

int main() {
    struct sysuser su;

    printf("Enter username:");
    scanf("%s", su.username);        /*输入待校验的用户名*/
    printf("Enter password:");
    scanf("%s", su.password);        /*输入待校验的密码*/
    if (checkUserValid(&su) == 1) {     /*调用函数进行校验*/
        printf("Valid user!\n");       /*成功输出Valid user!*/
    } else {
        printf("Invalid user!\n");      /*失败输出Invalid user!*/
    }

    return 0;
}

/*加密算法*/
void encrypt(char *pwd) {
    int i;

    /*与15异或，实现低四位取反，高四位保持不变*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}

/*校验用户信息的合法性，成功返回1，否则返回0*/
int checkUserValid(struct sysuser *psu) {
    FILE *fp;
    char usr[30], usr1[30], pwd[10];
    int check = 0;                    /*检查结果变量，初始化为0*/

    /*连接生成待校验字符串*/
    strcpy(usr, psu->username);        /*复制psu->username到usr1 */
    strcpy(pwd, psu->password);    /*复制psu->password到pwd */
    encrypt(pwd);                    /*调用例12-2的encrypt对密码进行加密*/
    /*连接usr、空格、pwd和\n构成新字符串usr，用于在文件中检查匹配*/
    strcat(usr, " ");
    strcat(usr, pwd);
    strcat(usr, "\n");
    /*打开文件"f12-2.txt"读入*/
    if ((fp = fopen("f12-2.txt", "r")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*从文件读入用户信息数据，遍历判断是否存在*/
    while (!feof(fp)) {
        fgets(usr1, 30, fp);         /*读入一行用户信息字符串到usr1*/
        if (strcmp(usr, usr1) == 0) {   /*比较判断usr与usr1是否相同*/
            check = 1;
            break;
        }
    }
    /*关闭文件*/
    if (fclose(fp)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return check;
}