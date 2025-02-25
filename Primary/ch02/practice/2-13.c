#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    double sum=0;
    for(int i=1;i<=N;i++)
        sum+=1.0/i;

    printf("sum = %.6lf",sum);
    return 0;
}
