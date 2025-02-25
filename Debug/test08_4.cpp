#include <stdio.h>
void strc(char s, char t);
int main(void)
{
	char s[80], t[80];

	printf("Enter s: ");
	gets(s);
	printf("Enter t: ");
	gets(t);
	strc(s, t);
	puts(t);      

	return 0;
}
void strc(char s, char t)
{ 
	while (*t != '\0'){
		t++;    
    }
	while ((*t = *s) != '\0'){
		;
	}

}

