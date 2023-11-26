#include <stdio.h>

#define MAX_DIGITS 10

int main() {
    int digits[MAX_DIGITS] = {0};
    int num;

    // 数字の出現回数をカウント
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            num = c - '0';
            digits[num]++;
        }
    }

    // グラフの表示
    for (int i = 0; i < MAX_DIGITS; i++) {
        printf("%d: ", i);
        for (int j = 0; j < digits[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
