#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("整数nを入力して: ");
    scanf("%d", &n);
    if (n <= 0)   return 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1から%dまでの総和は%dです。\n", n, sum);

    return 0;
}
