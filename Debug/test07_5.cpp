# include <stdio.h>
# define MAXLEN 80
int main()
{
	char temp;
	char str[MAXLEN];
	int i, j;

printf("Enter a string: ");
	i = 0;
	while ((str[i] = getchar()) !='\n'){
		i++;
	}
	str[i] = '\0';
	
	j = i - 1;		/* ����ʱ���öϵ�1 */
	i = 0;
	while (i < j) {
		temp = str[i]; 
		str[i] = str[j]; 
		str[j] = temp;
		i++;
		j++;		/* ����ʱ���öϵ�2 */
	}
	for(i = 0; i < 80; i++){/* ����ʱ���öϵ�3 */
		putchar(str[i]);
}
printf("\n");

	return 0;
}
