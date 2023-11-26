#include <stdio.h>

unsigned int rrotate(unsigned int x, int n) {
    return (x >> n) | (x << (32 - n));
}

unsigned int lrotate(unsigned int x, int n) {
    return (x << n) | (x >> (32 - n));
}

int main() {
    unsigned int x = 0x12345678;
    int n = 4;

    unsigned int rrotated = rrotate(x, n);
    unsigned int lrotated = lrotate(x, n);

    printf("Original: 0x%08X\n", x);
    printf("Right rotated: 0x%08X\n", rrotated);
    printf("Left rotated: 0x%08X\n", lrotated);

    return 0;
}
