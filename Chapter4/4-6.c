#include <stdio.h>

int main() {
    int no;

    printf("正の整数値を入力: ");
    scanf("%d", &no);

    if (no <= 0)  return 0;

    int i = 1;
    while (i <= no)
        if (i % 2 == 0) printf("%d ", i++);
        else            i++;
    printf("\n");

    return 0;
}