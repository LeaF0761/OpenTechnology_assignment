
#include <stdio.h>

int main() {
    int num1, num2, product;
    printf("最初の整数を入力してください: ");
    scanf("%d", &num1);
    printf("次の整数を入力してください: ");
    scanf("%d", &num2);
    product = num1 * num2;
    printf("%d と %d の積は %d です。\n", num1, num2, product);
    return 0;
}
