#include <stdio.h>

int main() {
    int no;

    printf("整数値を入力: ");
    scanf("%d", &no);

    if  (no == 0)   puts("その値は0です。");
    else if (no > 0)puts("その値は正です。");
    else if (no < 0)puts("その値は負です。");

//変更に意味はなさそう、0でも正の数でもない数は常に負の数になる
    return 0;
}
