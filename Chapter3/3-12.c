#include <stdio.h>

int main() {
    int n;

    printf("整数を入力: ");
    scanf("%d", &n);
    //偶数か奇数かを判定
    int judge = n % 2;

    switch (judge)
    {
    case 0:
        printf("その数は偶数です。\n");
        break;
    
    case 1:
        printf("その数は奇数です。\n");
        break;

    }
    return 0;
}
