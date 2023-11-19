#include <stdio.h>

int main() {
    int no;

    printf("正の整数値を入力: ");
    scanf("%d", &no);

    if (no <= 0)  return 0;

    //カウントダウン
    while (no >= 1)
        printf("%d ", no--);
    printf("\n");

    return 0;
}