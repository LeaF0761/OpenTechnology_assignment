#include <stdio.h>

#define SWAP(x, y) do { \
    int temp = x; \
    x = y; \
    y = temp; \
} while (0)

int main() {
    int x = 10;
    int y = 20;

    printf("交換前: x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("交換後: x = %d, y = %d\n", x, y);
    return 0;
}
