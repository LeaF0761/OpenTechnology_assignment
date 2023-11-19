#include <stdio.h>

int main()
{
    int num;
    char choice;
    
    do
    {
        printf("整数値を入力: ");
        scanf("%d", &num);

        if (num == 0)       puts("その値は0です。");
        else if (num > 0)   puts("その値は正です。");
        else if (num < 0)   puts("その値は負です。");

        printf("続けますか？(y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y');

    return 0;
}
