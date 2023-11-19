#include <stdio.h>

int main() {
    //入力ncm,mcm,lcm
    //ncmからmcmまでの平均体重をlｃｍ刻みで表示する
    int min, max, range;

    printf("何センチから: ");
    scanf("%d", &min);

    printf("何センチまで: ");
    scanf("%d", &max);

    printf("何センチごと: ");
    scanf("%d", &range);

    for (int i = min; i <= max; i += range) {
        float averageWeight = (i - 100) * 0.9;
        printf("%dcm %.2fkg\n", i, averageWeight);
    }
    
    return 0;
}