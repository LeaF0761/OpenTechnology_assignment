#include <stdio.h>

int main() {
    int height;
    float averageWeight;

    // 身長の入力
    printf("身長を入力: ");
    scanf("%d", &height);

    averageWeight = (height - 100) * 0.9;
    printf("標準体重は %.1f kgです\n", averageWeight);

    return 0;
}
