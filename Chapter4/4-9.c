#include <stdio.h>

int main() {
    int num;

    printf("正の整数を入力: ");
    scanf("%d", &num);

    if (num <= 0)   return 0;
    
    while (num-- > 0) {
        if (num % 2 == 0) putchar('-');
        else              putchar('+');
    }
    putchar('\n');

    return 0;
}