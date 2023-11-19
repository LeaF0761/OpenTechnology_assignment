#include <stdio.h>

int main() {
    int num;

    printf("整数値を入力: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
