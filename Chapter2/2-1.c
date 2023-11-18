
#include <stdio.h>

int main() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    float percentage = (float)x / y * 100;
    printf("%dは%dの%.2f%%です。\n", x, y, percentage);
    return 0;
}
