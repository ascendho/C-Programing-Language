/* ����12-3�������û���Ϣ�ļ�������12-2���û���Ϣ�ļ�f12-2.txt�ļ�����һ�ݣ�ȡ��Ϊ�ļ�f12-3.txt��
 * ˵�������ļ�f12-2.txt��Դ�������ͬһĿ¼�£�ִ�г��� */

/* �����û���Ϣ�ļ� */
#include <stdio.h>
#include <process.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    /*���ļ�����������*/
    if ((fp1 = fopen("f12-2.txt", "r")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*���ļ���д������*/
    if ((fp2 = fopen("f12-3.txt", "w")) == NULL) {
        printf("File open error!\n");
        exit(0);
    }
    /*�������ݣ����ļ�1��ȡ��д���ļ�2 */
    while (!feof(fp1)) {
        ch = fgetc(fp1);                /*��fp1��ָʾ���ļ��ж�ȡһ���ַ�*/
        if (ch != EOF) fputc(ch, fp2);    /*���ַ�chд��fp2ָʾ���ļ�*/
    }
    /*�ر��ļ�f12-2.txt */
    if (fclose(fp1)) {
        printf("Can not close the file!\n");
        exit(0);
    }
    /*�ر��ļ�f12-3.txt */
    if (fclose(fp2)) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}