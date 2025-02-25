#include <stdio.h>
int main (void)
{  
	int i, index, j, n, max=0;
	struct students{
		int number;
		char name[20];
		int score[3];
		int sum;
	};						

	printf("n=");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d%s", &student[i].number, student[i].name);  

		for(j = 0; j < 3; j++){
			scanf("%d", &student[i].score[j]);  
			student[i].sum += student[i].score[j];  
		}
	}	
	index = 0;
	max = student[0].sum;
	for(i = 1; i < n; i++){
		if(max < student[i].sum) { 
			index = i;

		}
	}
	printf("%s, %d\n", student[index].name, student[index].sum);
	
	return 0;
}
