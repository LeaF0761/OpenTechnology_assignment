#include <stdio.h>

int main() {
    int num1, num2, diff;
    
    printf("整数1を入力: ");
    scanf("%d", &num1);
    
    printf("整数2を入力: ");
    scanf("%d", &num2);
    
    if(num1 < num2) diff = num2 - num1; 
    else            diff = num1 - num2;
    
    printf("差は %d です\n", diff);
    
    return 0;
}
