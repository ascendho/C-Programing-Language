/*����12-6�����ʵ���ʽ��˻��Ĺ�������Ҫ�����¡�
��1���ʽ��˻�����Ϣͳһ��������ļ��У�������ļ����������������¼ID���������ڡ������¼������������ı�ʾ���룬���ı�ʾ֧��������ÿ����һ����֧���ļ�Ҫ����һ����¼��������һ����
��2������ʵ��3�����ܣ��������ٴ����ʽ��˻��ļ�����������֧����¼����������м�¼����ʾ�ʽ��˻�����ϸ��֧��ˮ��Ϣ���ۣ���ѯ���һ����¼����֪�˻����˻��ļ�����Ϊcashbox.dat���ļ��Ĳ����������£�
*/

/* cashbox.txt������ļ�����¼�ʽ��˻�������ˮ��Ϣ */
/* ����Ĺ��ܣ��������ˮ��¼����ѯ�ʽ��˻������� */
#include "stdio.h"
#include "stdlib.h"
#include "process.h"

long size;                    /* ��������sizeof(struct LogData)*/

struct LogData {                /*��¼�Ľṹ*/
    long logid;                /*��¼ID*/
    char logdate[11];        /*��¼��������*/
    char lognote[15];        /*��¼�¼�˵��*/
    double charge;            /*�������ã�����ʾ���룬����ʾ֧��*/
    double balance;            /*���*/
};

int inputchoice()            /*ѡ���������*/
{
    int mychoice;

    printf("\nEnter your choice:\n");
    printf("1 - Add a new cash LOG.\n2 - List All Cash LOG.\n");
    printf("3 - Query Last Cash LOG.\n0 - End program.\n");
    scanf("%d", &mychoice);

    return mychoice;
}

long getLogcount(FILE *cfptr)        /*��ȡ�ļ���¼����*/
{
    long begin, end, logcount;

    fseek(cfptr, 0L, SEEK_SET);
    begin = ftell(cfptr);
    fseek(cfptr, 0L, SEEK_END);
    end = ftell(cfptr);
    logcount = (end - begin) / size;

    return logcount;
}

void ListAllLog(FILE *cfptr)        /*�г�������֧��ˮ��¼*/
{
    struct LogData log;

    fseek(cfptr, 0L, SEEK_SET);            /*��λָ�뵽�ļ���ʼλ��*/
    fread(&log, size, 1, cfptr);
    printf("logid  logdate lognote charge balance\n");
    while (!feof(cfptr)) {
        printf("%6ld %-11s %-15s %10.2lf %10.2lf\n", log.logid, log.logdate, log.lognote, log.charge, log.balance);
        fread(&log, size, 1, cfptr);
    }
}

void QueryLastLog(FILE *cfptr)        /*��ѯ��ʾ���һ����¼*/
{
    struct LogData log;
    long logcount;

    logcount = getLogcount(cfptr);
    if (logcount > 0) {                /*��ʾ�м�¼����*/
        fseek(cfptr, size * (logcount - 1), SEEK_SET);    /*��λ����¼*/
        fread(&log, size, 1, cfptr);                /*��ȡ����¼*/
        printf("The last log is:\n");
        printf("logid:%-6ld\nlogdate:%-11s\nlognote:%-15s\n", log.logid, log.logdate, log.lognote);
        printf("charge:%-10.2lf\nbalance:%-10.2lf\n", log.charge, log.balance);   /*��ʾ����¼����*/
    } else {
        printf("no logs in file!\n");
    }
}

void AddNewLog(FILE *cfptr)            /*����¼�¼*/
{
    struct LogData log, lastlog;
    long logcount;

    printf("Input logdate(format:2006-01-01):");
    scanf("%s", log.logdate);
    printf("Input lognote:");
    scanf("%s", log.lognote);
    printf("Input Charge:Income+ and expend-:");
    scanf("%lf", &log.charge);
    logcount = getLogcount(cfptr);        /*��ȡ��¼��*/

    if (logcount > 0) {
        fseek(cfptr, size * (logcount - 1), SEEK_SET);
        fread(&lastlog, size, 1, cfptr);  /*��������¼*/
        log.logid = lastlog.logid + 1;     /*��¼�Ű�˳�����ϴεĺ�+1*/
        log.balance = log.charge + lastlog.balance;
    } else {                                /*����ļ��ǳ�ʼ����¼��Ϊ0*/
        log.logid = 1;
        log.balance = log.charge;
    }
    rewind(cfptr);
    printf("logid= %ld\n", log.logid);
    fwrite(&log, sizeof(struct LogData), 1, cfptr);    /*д���¼*/
}

int main() {
    FILE *fp;
    int choice;

    if ((fp = fopen("cashbox.txt", "ab+")) == NULL) {
        printf("can not open file cashbox.txt!\n");
        exit(0);
    }
    size = sizeof(struct LogData);
    while ((choice = inputchoice()) != 0) {
        switch (choice) {
            case 1:                 /*����¼�¼*/
                AddNewLog(fp);
                break;
            case 2:                 /*�г�������֧��ˮ��¼*/
                ListAllLog(fp);
                break;
            case 3:                 /*��ѯ�������*/
                QueryLastLog(fp);
                break;
            default:
                printf("Input Error.");
                break;
        }
    }
    if (fclose(fp) != 0) {
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}