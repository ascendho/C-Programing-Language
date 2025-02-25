#include <stdio.h>
#include <string.h>

struct book_info {
    double price;
    char name[100];
};

void ReadString(char s[]);

int main() {
    int first=1, n;
    struct book_info highest, lowest, cur;

    scanf("%d\n", &n);

    while (n--) {
        ReadString(cur.name);
        scanf("%lf\n", &cur.price);

        if (first) {
            highest.price = cur.price;
            strcpy(highest.name, cur.name);
            lowest.price = cur.price;
            strcpy(lowest.name, cur.name);
            first = 0;
            continue;
        }

        if (cur.price > highest.price) {
            highest.price = cur.price;
            strcpy(highest.name, cur.name);
        } else if (cur.price < lowest.price) {
            lowest.price = cur.price;
            strcpy(lowest.name, cur.name);
        }
    }

    printf("%.2f, %s\n", highest.price, highest.name);
    printf("%.2f, %s\n", lowest.price, lowest.name);

    return 0;
}

void ReadString(char s[]) {
    int i = 0;
    scanf("%c", &s[i]);

    while (s[i] != '\n') {
        scanf("%c", &s[++i]);
    }

    s[i] = '\0';
}