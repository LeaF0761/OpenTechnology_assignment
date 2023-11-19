#include <stdio.h>

int main() {
    int no;
    int count = 0;

    printf("正の整数を入力: ");
    scanf("%d", &no);
    if (no < 0) return 0;

    
    for (int i = 1; i <= no; i++)
    {
        int temp = i%10;
        printf("%d",temp);
    }
    
    
    
    printf("\n");

    return 0;
}
