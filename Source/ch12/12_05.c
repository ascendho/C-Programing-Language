/* ����12-5�����ʵ���Զ����Ʒ�ʽ��д�û���Ϣ�ļ�f12-5.txt����5λ�û���Ϣ(�û��������룬
 * ����Ҫ�󾭹���12-2��encrypt()��������)д���ļ���Ȼ����������û���Ϣ��ʾ����Ļ�� */

/* �����Ʒ�ʽ��д�û���Ϣ�ļ� */
#include <stdio.h>
#include <string.h>
#include<process.h>

#define SIZE 5  /*�û�����*/

struct sysuser { /*�û���Ϣ�ṹ��*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int main() {
    FILE *fp;   /*1.�����ļ�ָ��*/
    int i;
    struct sysuser u[SIZE], su[SIZE], *pu = u, *psu = su;

    /*2.���ļ��������������ļ����ж�/д��ʽ*/
    if ((fp = fopen("f12-5.txt", "wb+")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*3.����SIZE���û���Ϣ������������ܣ����浽�ṹ������u */
    for (i = 0; i < SIZE; i++, pu++) {
        printf("Enter %i th sysuser(name password):", i);
        scanf("%s%s", pu->username, pu->password);  /*�����û���������*/
        encrypt(pu->password);    /*���ü����㷨��������м��ܴ���*/
    }
    pu = u;
    fwrite(pu, sizeof(struct sysuser), SIZE, fp);    /*д��������ļ�*/
    rewind(fp);                                    /*��ָ�����¶�λ���ļ���*/
    fread(psu, sizeof(struct sysuser), SIZE, fp);        /*��ȡSIZE�����ݵ�psuָ��Ľṹ����*/
    for (i = 0; i < SIZE; i++, psu++)
        printf("%s\t%s\n", psu->username, psu->password);
    /*�ر��ļ�*/
    if (fclose(fp)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/*���ܺ�������pwd���м��ܴ���*/
void encrypt(char *pwd) {
    int i;

    /*��15���ʵ�ֵ���λȡ��������λ���ֲ���*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}