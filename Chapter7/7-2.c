#include <stdio.h>

int main() {
    unsigned int num = 10; // 符号なし整数
    unsigned int shift = 2; // シフトするビット数

    // 左シフト
    unsigned int left_shifted = num << shift;
    printf("左シフト結果: %u\n", left_shifted);
    // 2のべき乗で乗算
    unsigned int multiplied = num * (1 << shift);
    printf("2のべき乗で乗算結果: %u\n", multiplied);


    // 右シフト
    unsigned int right_shifted = num >> shift;
    printf("右シフト結果: %u\n", right_shifted);
    // 2のべき乗で除算
    unsigned int divided = num / (1 << shift);
    printf("2のべき乗で除算結果: %u\n", divided);

    return 0;
}
