#include <stdio.h>

int main() {
    int n;
    printf("整数値nを入力:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int square = i * i;
        printf("%dの2乗は%d\n", i, square);
    }

    return 0;
}
