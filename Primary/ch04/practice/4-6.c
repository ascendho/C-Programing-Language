# include <stdio.h>

int main() {
    int count = 0, flag = 0, mynumber, n, yournumber;
    scanf("%d%d", &mynumber, &n);

    if (n > 100 || mynumber > 100)
        printf("Invalid number!\n");
    else {
        while (count < n) {
            scanf("%d", &yournumber);

            if (yournumber < 0) {
                break;
            }

            count++;

            if (yournumber == mynumber) {
                if (count == 1) {
                    printf("Bingo!\n");
                } else if (count <= 3) {
                    printf("Lucky You!\n");
                } else {
                    printf("Good Guess!\n");
                }

                flag = 1;
                break;
            } else if (yournumber > mynumber) {
                printf("Too big\n");
            } else {
                printf("Too small\n");
            }
        }

        if (flag == 0) {
            printf("Game Over\n");
        }
    }

    return 0;
}