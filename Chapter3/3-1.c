#include <stdio.h>

int main() {
    int a, b;

    printf("整数a: ");
    scanf("%d", &a);

    printf("整数b: ");
    scanf("%d", &b);

    if (a % b == 0) printf("%dは%dの約数です。\n", b, a);
    else            printf("%dは%dの約数ではない。\n", b, a);

    return 0;
}
