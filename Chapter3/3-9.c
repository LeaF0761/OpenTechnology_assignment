#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("整数値aを入力:");
    scanf("%d", &a);
    
    printf("整数値bを入力:");
    scanf("%d", &b);
    
    printf("整数値cを入力:");
    scanf("%d", &c);
    
    //条件演算子を使って書き換える
    int min = a < b ? a : b;
        min = min < c ? min : c;
 
    printf("最小値は%dです。\n", min);
    return 0;
}