#include <stdio.h>

int main() {
    int input;
    printf("整数を入力してください: ");
    scanf("%d", &input);
    printf("%dから7を減じた値は%dです。\n", input, input - 7);
    return 0;
}
