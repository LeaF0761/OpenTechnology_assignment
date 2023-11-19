#include <stdio.h>

int main() {
    int length, width;
    
    printf("一辺の長さを入力: ");
    scanf("%d", &length);
    
    printf("一辺の長さを入力: ");
    scanf("%d", &width);
    
    int longSide = (length >= width) ? length : width;
    int shortSide = (length >= width) ? width : length;
    
    for (int i = 0; i < shortSide; i++) {
        for (int j = 0; j < longSide; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
