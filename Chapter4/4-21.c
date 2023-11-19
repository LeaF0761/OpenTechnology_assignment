#include <stdio.h>

int main() {
    int length;
    printf("正方形の一辺の長さを入力: ");
    scanf("%d", &length);

     for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
