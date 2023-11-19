#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;

    printf("整数値a: ");
    scanf("%d", &a);

    printf("整数値b: ");
    scanf("%d", &b);

    int min = a;
    int max = b;

    if (a > b) {
        max = a;
        min = b;
    }
        
    for (int i = min; i <= max; i++) {
        sum += i;
    }

    printf("%d以上%d以下までの和: %d\n",min,max,sum);

    return 0;
}
