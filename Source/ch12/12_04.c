/* ����12-4����12-2��f12-2.txt�ļ�������ϵͳ�û���Ϣ����дһ������checkUserValid()���ڵ�¼ϵͳʱУ���û��ĺϷ��ԡ�
 * ��鷽�����ڳ�������ʱ�����û��������룬Ȼ�����ļ��в��Ҹ��û���Ϣ������û������������ļ����ҵ������ʾ�û��Ϸ�������1�����򷵻�0��
 * ��������ʱ������һ���û��������룬����checkUserValid()�������������1������ʾ"Valid user!"���������"Invalid user!"�� */

/*�û��Ϸ���У��*/
#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <string.h>

struct sysuser {                   /*����ϵͳ�û���Ϣ�ṹ*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int checkUserValid(struct sysuser *psu);

int main() {
    struct sysuser su;

    printf("Enter username:");
    scanf("%s", su.username);        /*�����У����û���*/
    printf("Enter password:");
    scanf("%s", su.password);        /*�����У�������*/
    if (checkUserValid(&su) == 1) {     /*���ú�������У��*/
        printf("Valid user!\n");       /*�ɹ����Valid user!*/
    } else {
        printf("Invalid user!\n");      /*ʧ�����Invalid user!*/
    }

    return 0;
}

/*�����㷨*/
void encrypt(char *pwd) {
    int i;

    /*��15���ʵ�ֵ���λȡ��������λ���ֲ���*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}

/*У���û���Ϣ�ĺϷ��ԣ��ɹ�����1�����򷵻�0*/
int checkUserValid(struct sysuser *psu) {
    FILE *fp;
    char usr[30], usr1[30], pwd[10];
    int check = 0;                    /*�������������ʼ��Ϊ0*/

    /*�������ɴ�У���ַ���*/
    strcpy(usr, psu->username);        /*����psu->username��usr1 */
    strcpy(pwd, psu->password);    /*����psu->password��pwd */
    encrypt(pwd);                    /*������12-2��encrypt��������м���*/
    /*����usr���ո�pwd��\n�������ַ���usr���������ļ��м��ƥ��*/
    strcat(usr, " ");
    strcat(usr, pwd);
    strcat(usr, "\n");
    /*���ļ�"f12-2.txt"����*/
    if ((fp = fopen("f12-2.txt", "r")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*���ļ������û���Ϣ���ݣ������ж��Ƿ����*/
    while (!feof(fp)) {
        fgets(usr1, 30, fp);         /*����һ���û���Ϣ�ַ�����usr1*/
        if (strcmp(usr, usr1) == 0) {   /*�Ƚ��ж�usr��usr1�Ƿ���ͬ*/
            check = 1;
            break;
        }
    }
    /*�ر��ļ�*/
    if (fclose(fp)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return check;
}