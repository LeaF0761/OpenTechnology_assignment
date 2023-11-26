#include <stdio.h>

unsigned int set(unsigned int x, int pos) {
    return x | (1 << pos);
}

unsigned int reset(unsigned int x, int pos) {
    return x & ~(1 << pos);
}

unsigned int inverse(unsigned int x, int pos) {
    return x ^ (1 << pos);
}

int main() {
    unsigned int x = 10; 
    int pos = 2;

    printf("Original: %u\n", x);

    unsigned int set_result = set(x, pos);
    printf("Set result: %u\n", set_result);

    unsigned int reset_result = reset(x, pos);
    printf("Reset result: %u\n", reset_result);

    unsigned int inverse_result = inverse(x, pos);
    printf("Inverse result: %u\n", inverse_result);

    return 0;
}