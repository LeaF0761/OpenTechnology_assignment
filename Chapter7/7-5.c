#include <stdio.h>

unsigned int set_n(unsigned int x, int pos,int n) {
    unsigned int mask = 0;
    for (int i = 0; i < n; i++) {
        mask |= (1 << (pos + i));
    }
    return x | mask;
}

//n個のビットをリセットするようにする
unsigned int reset_n(unsigned int x, int pos,int n) {
    unsigned int mask = 0;
    for (int i = 0; i < n; i++) {
        mask |= (1 << (pos + i));
    }
    return x & ~mask;
}

unsigned int inverse_n(unsigned int x, int pos,int n) {
    unsigned int mask = 0;
    for (int i = 0; i < n; i++) {
        mask |= (1 << (pos + i));
    }
    return x ^ mask;
}

int main() {
    unsigned int x = 1001; 
    int pos = 2;
    int n = 2;

    printf("Original: %u\n", x);
    unsigned int set_result = set_n(x, pos,n);
    printf("Set result: %u\n", set_result);

    unsigned int reset_result = reset_n(x, pos,n);
    printf("Reset result: %u\n", reset_result);

    unsigned int inverse_result = inverse_n(x, pos,n);
    printf("Inverse result: %u\n", inverse_result);
    return 0;

    
}