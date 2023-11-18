#include <stdio.h>

int main() {
    int a, b;
    double percentage;

    printf("整数a: ");
    scanf("%d", &a);

    printf("整数b: ");
    scanf("%d", &b);

    percentage = (double)a / b * 100;

    printf("aはbの%.2f%%です。\n", percentage);

    return 0;
}
