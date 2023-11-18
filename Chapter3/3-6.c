#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("整数値aを入力:");
    scanf("%d", &a);
    
    printf("整数値bを入力:");
    scanf("%d", &b);
    
    printf("整数値cを入力:");
    scanf("%d", &c);
    
    int min = a;
    
    if (b < min) {
        min = b;
    }
    
    if (c < min) {
        min = c;
    }
    
    printf("最小値は%dです。\n", min);
    return 0;
}
