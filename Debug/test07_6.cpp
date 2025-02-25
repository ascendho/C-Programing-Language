# include<stdio.h>
int main(void)
{
    int i, number;	
    char str[80];

    printf("Enter a string: ");  
    i = 0;
    while((str[i] = getchar( )) != "\n"){ 
        i++; 
    }

	i = 0;
    while(i < 80){
        if(str[i] < '0' || str[i] > '9'){
         	break;
		}
		i++;
	}
number = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
		 	number = number * 10 + str[i] - '0'; 
        	break;
		}
		i++;
	}
    printf("number = %d\n", number);

    return 0;
}  

