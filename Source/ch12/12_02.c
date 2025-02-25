/*【例12-2】为了保障系统安全，通常采取用户帐号和密码登录系统。
 * 系统用户信息存放在一个文件中，系统帐号名和密码由若干字母与数字字符构成，因安全需要文件中的密码不能是明文，必须要经过加密处理。
 * 请编程实现：输入5个用户信息（包含帐号名和密码）并写入文件f12-2.dat。要求文件中每个用户信息占一行，帐号名和加密过的密码之间用一个空格分隔。
 * 密码加密算法：对每个字符ASCII码的低四位求反，高四位保持不变（即将其与15进行异或）。*/

/*创建系统用户帐号信息文件存储用户名和加密的密码*/
#include <stdio.h>
#include <string.h>
#include <process.h>

struct sysuser {                   /*定义系统用户帐号信息结构*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int main() {
    FILE *fp;                    /*1.定义文件指针*/
    int i;
    struct sysuser su;
    /*2.打开文件，进行写入操作*/
    if ((fp = fopen("f12-2.txt", "w")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*3. 将5位用户帐号信息写入文件*/
    for (i = 1; i <= 5; i++) {
        printf("Enter %i th sysuser(name password):", i);
        scanf("%s%s", su.username, su.password);            /*输入用户名和密码 */
        encrypt(su.password);                                /*进行加密处理*/
        fprintf(fp, "%s %s\n", su.username, su.password);    /*写入文件*/
    }
    if (fclose(fp)) {                /*4.关闭文件*/
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/*加密算法*/
void encrypt(char *pwd) {
    int i;

    /*与15（二进制码是00001111）异或，实现低四位取反，高四位保持不变*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}