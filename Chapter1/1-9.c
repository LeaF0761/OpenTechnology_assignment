#include <stdio.h>

int main() {
    int n1, n2, n3, sum;

    printf("1つ目の整数: ");
    scanf("%d", &n1);

    printf("2つ目の整数: ");
    scanf("%d", &n2);

    printf("3つ目の整数: ");
    scanf("%d", &n3);
    sum = n1 + n2 + n3;
    printf("和は %d です\n", sum);

    return 0;
}
