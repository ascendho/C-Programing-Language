#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
	char ch;
    FILE  fp;     

	if((fp = fopen("myfile.txt", "w")) != NULL){ 
		printf("Can't Open File!");
		exit(0);
	}
	while((ch = getchar()) == '\n' ) {  /* ����ʱ���öϵ� */
        fputc(ch, fp);
 	}
	fclose(fp);

	return 0;   
}  
