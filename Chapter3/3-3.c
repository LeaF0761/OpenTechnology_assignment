#include <stdio.h>

int main() {
    int num;
    int absNum;

    printf("整数値を入力: ");
    scanf("%d", &num);

    // 絶対値を計算
    if (num < 0) {
        absNum = -num;
    } else {
        absNum = num;
    }

    printf("絶対値は %d です。\n", absNum);

    return 0;
}
