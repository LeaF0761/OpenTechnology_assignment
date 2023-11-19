#include <stdio.h>

int main() {
    int no, digit = 0;
    int temp;

    printf("正の整数を入力: ");
    scanf("%d", &no);
    if (no <= 0)   return 0;

    temp = no;
    while (temp != 0) {
        temp /= 10;
        digit++;
    }
    printf("%dの桁数は%d桁です。\n", no, digit);
    return 0;
}