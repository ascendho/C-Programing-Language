#include <stdio.h>

#define SIZE 10

typedef struct friend {
    char name[100];
    long int age;
    char phone[100];
} Friend;

int main() {
    Friend a[SIZE], temp;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s %ld %s", &a[i].name, &a[i].age, &a[i].phone);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (a[j].age > a[j + 1].age) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    for (int i = 0; i < n; i++) {
        printf("%s %ld %s\n", a[i].name, a[i].age, a[i].phone);
    }

    return 0;
}