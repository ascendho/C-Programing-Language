/*����12-2��Ϊ�˱���ϵͳ��ȫ��ͨ����ȡ�û��ʺź������¼ϵͳ��
 * ϵͳ�û���Ϣ�����һ���ļ��У�ϵͳ�ʺ�����������������ĸ�������ַ����ɣ���ȫ��Ҫ�ļ��е����벻�������ģ�����Ҫ�������ܴ���
 * ����ʵ�֣�����5���û���Ϣ�������ʺ��������룩��д���ļ�f12-2.dat��Ҫ���ļ���ÿ���û���Ϣռһ�У��ʺ����ͼ��ܹ�������֮����һ���ո�ָ���
 * ��������㷨����ÿ���ַ�ASCII��ĵ���λ�󷴣�����λ���ֲ��䣨��������15������򣩡�*/

/*����ϵͳ�û��ʺ���Ϣ�ļ��洢�û����ͼ��ܵ�����*/
#include <stdio.h>
#include <string.h>
#include <process.h>

struct sysuser {                   /*����ϵͳ�û��ʺ���Ϣ�ṹ*/
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int main() {
    FILE *fp;                    /*1.�����ļ�ָ��*/
    int i;
    struct sysuser su;
    /*2.���ļ�������д�����*/
    if ((fp = fopen("f12-2.txt", "w")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*3. ��5λ�û��ʺ���Ϣд���ļ�*/
    for (i = 1; i <= 5; i++) {
        printf("Enter %i th sysuser(name password):", i);
        scanf("%s%s", su.username, su.password);            /*�����û��������� */
        encrypt(su.password);                                /*���м��ܴ���*/
        fprintf(fp, "%s %s\n", su.username, su.password);    /*д���ļ�*/
    }
    if (fclose(fp)) {                /*4.�ر��ļ�*/
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}

/*�����㷨*/
void encrypt(char *pwd) {
    int i;

    /*��15������������00001111�����ʵ�ֵ���λȡ��������λ���ֲ���*/
    for (i = 0; i < strlen(pwd); i++) {
        pwd[i] = pwd[i] ^ 15;
    }
}