#include <stdio.h>

#define DIFF(a, b) ((a) - (b))

int main() {
    int x = 10;
    int y = 5;
    int diff = DIFF(x, y);
    
    printf("x: %d, y: %d, diff: %d\n", x, y, diff);
    
    return 0;
}
