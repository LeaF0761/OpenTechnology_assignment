#include <stdio.h>

int main() {
    int no;

    printf("整数値を入力: ");
    scanf("%d", &no);
    if (no<0) return 0;

    while (no >= 0) {
        printf("%d ", no);
        no--;
    }
    printf("\n");

    return 0;
}
