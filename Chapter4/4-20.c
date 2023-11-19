#include <stdio.h>

int main() {
    int i, j;
    printf("   |");
    // 1から9までの九九の表を作成
    for (i = 1; i <= 9; i++) {
        if (i == 1) {
            for (j = 1; j <= 9; j++) {
                printf("%3d", j);
            }
            printf("\n");
            printf("---+");
            for (j = 1; j <= 9; j++) {
                printf("---");
            }
            printf("\n");
        }

        for (j = 1; j <= 9; j++) {
            if (j == 1) printf("%3d|", i);
            printf("%3d", i * j);
        }
        printf("\n");
    }

    return 0;
}
