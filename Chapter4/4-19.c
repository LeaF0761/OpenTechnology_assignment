#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("整数値を入力: ");
    scanf("%d", &num);

    printf("%dの約数: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n約数の個数: %d\n", count);

    return 0;
}
