#include <stdio.h>

int main() {
    int a, b;
    int sum, product;
    
    printf("整数a: ");
    scanf("%d", &a);

    printf("整数b: ");
    scanf("%d", &b);

    sum = a + b;

    product = a * b;

    printf("和: %d\n", sum);
    printf("積: %d\n", product);

    return 0;
}
