/*【例10-1】有序表的增删查操作。首先输入一个无重复元素的、从小到大排列的有序表，并在屏幕上显示以下菜单（编号和选项），
 * 用户可以反复对该有序表进行插入、删除和查找操作，也可以选择结束。当用户输入编号1～3和相关参数时，将分别对该有序表进行插入、删除和查找操作，输入其他编号，则结束操作。*/

/* 有序表的增删查操作 */
#include<stdio.h>

#define MAXN 100                             /* 定义符号常量表示数组a的长度 */

int Count = 0;                               /* 用全局变量Count表示数组a中待处理的元素个数 */

void select(int a[], int option, int value); /* 决定对有序数组a进行何种操作的控制函数 */

int input_array(int a[]);           /* 输入有序数组a的函数 */

void print_array(int a[]);          /* 输出有序数组a的函数 */

void insert(int a[], int value);    /* 在有序数组a中插入一个值为value的元素的函数 */

void delete(int a[], int value);    /* 删除有序数组a中等于value的元素的函数 */

void query(int a[], int value);     /* 用二分法在有序数组a中查找元素value的函数 */

int main() {
    int option, value, a[MAXN];

    if (input_array(a) == -1) {       /* 调用函数输入有序数组 a */
        return 0;
    }

    printf("[1] Insert\n");    /* 以下4行显示菜单*/
    printf("[2] Delete\n");
    printf("[3] Query\n");
    printf("[Other option] End\n");

    while (1) {                             /* 循环 */
        printf("Input option: ");    /* 提示输入编号 */
        scanf("%d", &option);        /* 接受用户输入的编号 */
        if (option < 1 || option > 3) {     /* 如果输入1、2、3以外的编号，结束循环 */
            break;
        }
        printf("Input an element: ");    /* 提示输入参数 */
        scanf("%d", &value);             /* 接受用户输入的参数value */

        select(a, option, value);               /* 调用控制函数 */
        printf("\n");
    }

    printf("Thanks.");                /* 结束操作 */
    return 0;
}

/* 控制函数 */
void select(int a[], int option, int value) {
    switch (option) {
        case 1:
            insert(a, value);  /* 调用插入函数在有序数组 a 中插入元素value */
            break;
        case 2:
            delete(a, value);  /* 调用删除函数在有序数组 a 中删除元素value */
            break;
        case 3:
            query(a, value);   /* 调用查询函数在有序数组 a 中查找元素value */
            break;
    }
}

/* 有序表输入函数 */
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

/* 有序表输出函数 */
void print_array(int a[]) {
    printf("The ordered array a is: ");
    for (int i = 0; i < Count; i++) {           /* 输出时相邻数字间用一个空格分开，行末无空格 */
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf(" %d", a[i]);
        }
    }
}

/* 有序表插入函数 */
void insert(int a[], int value) {
    int i, j;

    for (i = 0; i < Count; i++) {         /* 定位：找到待插入的位置，即退出循环时i的值 */
        if (value < a[i]) {
            break;
        }
    }

    for (j = Count - 1; j >= i; j--) {    /* 腾位：将a[i]~a[Count-1]向后顺移一位 */
        a[j + 1] = a[j];
    }

    a[i] = value;                /* 插入：将value 的值赋给a[i] */
    Count++;                     /* 增1：数组a中待处理的元素数量增1 */
    print_array(a);              /* 调用输出函数，输出插入后的有序数组a */
}

/* 有序表删除函数 */
void delete(int a[], int value) {
    int i, index = -1;               /* index的值为-1表示没找到，否则表示找到 */

    for (i = 0; i < Count; i++) {    /* 定位：如果找到待删除的元素，用index记录其下标 */
        if (value == a[i]) {
            index = i;
            break;
        }
    }

    if (index == -1) {               /* 没找到，则输出相应的信息 */
        printf("Failed to find the data, deletion failed.");
        return;
    } else {                         /* 找到，则删除a[index] */
        /* 将a[Count-1]~ a[index+1]向前顺移一位 */
        for (i = index; i < Count - 1; i++) {
            a[i] = a[i + 1];
        }

        Count--;                    /* 减1：数组a中待处理的元素数量减1 */
        print_array(a);             /* 调用输出函数，输出删除后的有序数组a */
    }
}

/* 有序表二分法查询函数 */
void query(int a[], int value) {
    int mid, left = 0, right = Count - 1;    /* 开始时查找区间为整个数组 */

    while (left <= right) {                  /* 循环条件 */
        mid = (left + right) / 2;            /* 得到中间位置 */
        if (value == a[mid]) {               /* 查找成功，输出下标，函数返回 */

            printf("The index is: %d", mid);
            return;
        } else if (value < a[mid]) {         /* 缩小查找区间为前半段，right前移 */
            right = mid - 1;
        } else {                             /* 缩小查找区间为后半段，left后移 */
            left = mid + 1;
        }
    }

    printf("This element does not exist.");        /* value不在数组a中 */
}