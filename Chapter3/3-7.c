#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;

    printf("整数値a:");
    scanf("%d", &a);
    printf("整数値b:");
    scanf("%d", &b);
    printf("整数値c:");
    scanf("%d", &c);
    printf("整数値d:");
    scanf("%d", &d);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    printf("最大値は%dです。\n", max);

    return 0;
}
