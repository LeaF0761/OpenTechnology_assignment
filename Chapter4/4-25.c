#include <stdio.h>

int main() {
    int n;

    printf("段数を入力: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (n-i)*2 +1; j++) {
            printf("%d", i % 10);
        }
        printf("\n");
    }

    return 0;
}
