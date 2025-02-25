#include "student_system.h"

int extern Count;		/* 其他文件模块定义的全局变量，需要声明为外部变量 */

/*查询学生信息的函数*/
void search_student(struct student students[ ], int num)
{  
   	int i, flag = 0;
   
   	if(Count == 0){ 
     	printf("Count of students is zero!\n");
     	return;
   	}
   
   	for(i = 0; i < Count; i++){ 
     	if(students[i].num == num){
        	flag = 1;
        	break;
		}
	} 
	
   if(flag != 0){
     	printf("num:%d, ", students[i].num);
     	printf("name:%s, ", students[i].name);
     	printf("math:%d, ", students[i].math);
     	printf("english:%d, ", students[i].english);
     	printf("computer:%d, ", students[i].computer);
     	printf("average:%.2f\n", students[i].average);
   }else{
   	 	printf("Not Found!");
   }   
}