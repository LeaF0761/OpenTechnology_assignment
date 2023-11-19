#include <stdio.h>

int main() {
    int rows, space;

    printf("ピラミッドの段数を入力：");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= (i - 1) * 2 + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
