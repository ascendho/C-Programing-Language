#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    double a=2,b=1;
    double sum=0;

    for(int i=0;i<N;i++){
        sum += a/b;

        double temp=b;
        b=a;
        a += temp;

    }

    printf("%.2f",sum);

    return 0;

}