/*����10-1����������ɾ���������������һ�����ظ�Ԫ�صġ���С�������е������������Ļ����ʾ���²˵�����ź�ѡ���
 * �û����Է����Ը��������в��롢ɾ���Ͳ��Ҳ�����Ҳ����ѡ����������û�������1��3����ز���ʱ�����ֱ�Ը��������в��롢ɾ���Ͳ��Ҳ���������������ţ������������*/

/* ��������ɾ����� */
#include<stdio.h>

#define MAXN 100                             /* ������ų�����ʾ����a�ĳ��� */

int Count = 0;                               /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */

void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */

int input_array(int a[]);           /* ������������a�ĺ��� */

void print_array(int a[]);          /* �����������a�ĺ��� */

void insert(int a[], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */

void delete(int a[], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */

void query(int a[], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */

int main() {
    int option, value, a[MAXN];

    if (input_array(a) == -1) {       /* ���ú��������������� a */
        return 0;
    }

    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
    printf("[2] Delete\n");
    printf("[3] Query\n");
    printf("[Other option] End\n");

    while (1) {                             /* ѭ�� */
        printf("Input option: ");    /* ��ʾ������ */
        scanf("%d", &option);        /* �����û�����ı�� */
        if (option < 1 || option > 3) {     /* �������1��2��3����ı�ţ�����ѭ�� */
            break;
        }
        printf("Input an element: ");    /* ��ʾ������� */
        scanf("%d", &value);             /* �����û�����Ĳ���value */

        select(a, option, value);               /* ���ÿ��ƺ��� */
        printf("\n");
    }

    printf("Thanks.");                /* �������� */
    return 0;
}

/* ���ƺ��� */
void select(int a[], int option, int value) {
    switch (option) {
        case 1:
            insert(a, value);  /* ���ò��뺯������������ a �в���Ԫ��value */
            break;
        case 2:
            delete(a, value);  /* ����ɾ���������������� a ��ɾ��Ԫ��value */
            break;
        case 3:
            query(a, value);   /* ���ò�ѯ�������������� a �в���Ԫ��value */
            break;
    }
}

/* ��������뺯�� */
int input_array(int a[]) {
    printf("Input the number of array elements: ");
    scanf("%d", &Count);

    printf("Input an ordered array element: ");

    for (int i = 0; i < Count; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] <= a[i - 1]) {
            printf("Error");
            return -1;
        }
    }

    return 0;
}

/* ������������ */
void print_array(int a[]) {
    printf("The ordered array a is: ");
    for (int i = 0; i < Count; i++) {           /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո� */
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf(" %d", a[i]);
        }
    }
}

/* �������뺯�� */
void insert(int a[], int value) {
    int i, j;

    for (i = 0; i < Count; i++) {         /* ��λ���ҵ��������λ�ã����˳�ѭ��ʱi��ֵ */
        if (value < a[i]) {
            break;
        }
    }

    for (j = Count - 1; j >= i; j--) {    /* ��λ����a[i]~a[Count-1]���˳��һλ */
        a[j + 1] = a[j];
    }

    a[i] = value;                /* ���룺��value ��ֵ����a[i] */
    Count++;                     /* ��1������a�д������Ԫ��������1 */
    print_array(a);              /* ������������������������������a */
}

/* �����ɾ������ */
void delete(int a[], int value) {
    int i, index = -1;               /* index��ֵΪ-1��ʾû�ҵ��������ʾ�ҵ� */

    for (i = 0; i < Count; i++) {    /* ��λ������ҵ���ɾ����Ԫ�أ���index��¼���±� */
        if (value == a[i]) {
            index = i;
            break;
        }
    }

    if (index == -1) {               /* û�ҵ����������Ӧ����Ϣ */
        printf("Failed to find the data, deletion failed.");
        return;
    } else {                         /* �ҵ�����ɾ��a[index] */
        /* ��a[Count-1]~ a[index+1]��ǰ˳��һλ */
        for (i = index; i < Count - 1; i++) {
            a[i] = a[i + 1];
        }

        Count--;                    /* ��1������a�д������Ԫ��������1 */
        print_array(a);             /* ����������������ɾ�������������a */
    }
}

/* �������ַ���ѯ���� */
void query(int a[], int value) {
    int mid, left = 0, right = Count - 1;    /* ��ʼʱ��������Ϊ�������� */

    while (left <= right) {                  /* ѭ������ */
        mid = (left + right) / 2;            /* �õ��м�λ�� */
        if (value == a[mid]) {               /* ���ҳɹ�������±꣬�������� */

            printf("The index is: %d", mid);
            return;
        } else if (value < a[mid]) {         /* ��С��������Ϊǰ��Σ�rightǰ�� */
            right = mid - 1;
        } else {                             /* ��С��������Ϊ���Σ�left���� */
            left = mid + 1;
        }
    }

    printf("This element does not exist.");        /* value��������a�� */
}