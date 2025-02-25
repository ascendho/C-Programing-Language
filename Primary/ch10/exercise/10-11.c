/* 有序表的增删改查操作 */
#include<stdio.h>
#define MAXN 10000    /* 定义符号常量表示数组a的长度 */

int Count = 0;        /* 用全局变量Count表示数组a中待处理的元素个数 */
void select(int a[], int option, int value); /* 决定对有序数组a进行何种操作的控制函数 */
int input_array(int a[ ]);    /* 输入有序数组a的函数 */
void print_array(int a[ ]);    /* 输出有序数组a的函数 */
int insert(int a[ ], int value);    /* 在有序数组a中插入一个值为value的元素的函数 */
int del(int a[ ], int value);    /* 删除有序数组a中等于value的元素的函数 */
int modify(int a[ ], int value1, int value2); /* 将有序数组a中等于value1的元素，替换为value2 */ 
int query(int a[ ], int value);     /* 用二分法在有序数组a中查找元素value的函数 */

int main(void) 
{
   int option, value, a[MAXN];
    
    if(input_array(a) == -1){     /* 调用函数输入有序数组 a */
         printf("Error");        /* a不是有序数组，则输出相应的信息 */
         return 0;
    }
    
    printf("[1] Insert\n");    /* 以下4行显示菜单*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1) {            /* 循环 */
        scanf("%d", &option);         /* 接受用户输入的编号 */
        if (option < 1 || option > 4) {    /* 如果输入1、2、3、4以外的编号，结束循环 */
            break;
        }
        scanf("%d", &value);         /* 接受用户输入的参数value */
        select(a, option, value);         /* 调用控制函数 */
        printf("\n");
    }
    printf("Thanks.");            /* 结束操作 */
    
    return 0;
}

/* 控制函数 */
void select(int a[ ], int option, int value) 
{
    int index, value2;
    
    switch (option) {
        case 1:
            index = insert(a, value);      /* 调用插入函数在有序数组 a 中插入元素value */
            if(index == -1){        /* 插入数据已存在，则输出相应的信息 */
                printf("Error");
            }else{                        
                print_array(a);        /* 调用输出函数，输出插入后的有序数组a */
            }
            break;
        case 2:
            index = del(a, value);      /* 调用删除函数在有序数组 a 中删除元素value */
            if(index == -1){        /* 没找到value，则输出相应的信息 */
                printf("Deletion failed.");
        }else{
            print_array(a);         /* 调用输出函数，输出删除后的有序数组a */
        }
            break;
        case 3:
            scanf("%d", &value2);         /* 接受用户输入的参数value2 */
            index = modify(a, value, value2);      /* 调用修改函数在有序数组 a 中修改元素value的值为value2 */
            if(index == -1){            /* 没找到value或者vaule2已存在，则输出相应的信息 */
                printf("Update failed.");
            }else{
            print_array(a);         /* 调用输出函数，输出修改后的有序数组a */
            }
            break;
        case 4:
            index = query(a, value);     /* 调用查询函数在有序数组 a 中查找元素value */
            if(index == -1){        /* 没找到value，则输出相应的信息 */
                printf( "Not found.");
            }else{            /* 找到，则输出对应的下标 */
            printf("%d", index);
            }
            break;
    }
}

/* 有序表输入函数 */
int input_array(int a[ ]) 
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i ++) {
        scanf("%d", &a[i]);
        if(i > 0 && a[i] <= a[i-1]){    /* a不是有序数组 */
            return -1;
        }
    }
    
    return 0;
}

/* 有序表输出函数 */
void print_array(int a[ ]) 
{
    for (int i = 0; i < Count; i ++) { /* 输出时相邻数字间用一个空格分开，行末无空格 */
        if(i == 0){     
           printf("%d", a[i]);
        }else{
           printf(" %d", a[i]);
        }
    }
}
 
/* 请在这里填写答案 */
int insert(int a[], int value)
{
    int i = 0;
    for (i = Count - 1; i >= 0; i--)
    {
        if (value > a[i])
        {
            break;
        }
        else if (value < a[i])
        {
            a[i + 1] = a[i];
        }
        else if (value == a[i])
        {
            return -1;
        }
    }
    a[i + 1] = value;
    return Count++;
}
int del(int a[], int value)
{
    for (int i = 0; i < Count; i++)
    {
        if (a[i] == value)
        {
            for (int j = i; j < Count - 1; j++)
            {
                a[j] = a[j + 1];
            }
            return Count--;
        }
    }
    return -1;
}
int modify(int a[], int value1, int value2)
{
    if (del(a, value1) == -1)//没有值为value1的元素退出&&有则删除
    {
        return -1;
    }
    if (insert(a, value2) == -1)//value2已在数组a中存在退出&&没有则插入并且排序
    {
        return -1;
    }
    return Count;
}
int query(int a[], int value)
{
    int life = 0;
    int right = Count - 1;
    while (life <= right)
    {
        int mid = (life + right) / 2;
        if (value > a[mid])
        {
            life = mid + 1;
        }
        else if (value < a[mid])
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}