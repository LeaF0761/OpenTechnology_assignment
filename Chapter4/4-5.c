#include <stdio.h>

int main() {
    int no;

    printf("正の整数値を入力: ");
    scanf("%d", &no);

    if (no <= 0)  return 0;

    int i = 1;
    while (i <= no)
        printf("%d ", i++);
    printf("\n");

    return 0;
}
