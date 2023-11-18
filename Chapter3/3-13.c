#include <stdio.h>

int main() {
    int month;

    printf("何月か入力（1〜12）:");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 2:
        case 12:
            printf("%d月は冬です。\n", month);
            break;

        case 3:
        case 4:
        case 5:
            printf("%d月は春です。\n", month);
            break;
        case 6:
        case 7:
        case 8:
            printf("%d月は夏です。\n", month);
            break;
        case 9:
        case 10:
        case 11:
            printf("%d月は秋です。\n", month);
            break;
        default:
            printf("無効な入力です。\n");
            break;
    }

    return 0;
}
