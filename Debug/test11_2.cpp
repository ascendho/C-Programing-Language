#include <stdio.h>
#include <stdlib.h>
char * change(char *s[ ], int n);
int main(void)
{  
	int i;
	char poem[4][20], *p[4];

	for(i = 0; i < 4; i++){
		scanf("%s", poem[i]);
		p[i] = poem[i];
	}

	printf("%s\n", change(poem, 4));

	return 0;
}
char * change(char *s[ ], int n)
{
	int i;
	char *t = (char *)malloc(9 * sizeof(char));

	for(i = 0; i < n; i++) {
		t[2 * i] = s[i][0];
		t[2 * i + 1] = *(s + i) + 1;
	}

	return t;
}
