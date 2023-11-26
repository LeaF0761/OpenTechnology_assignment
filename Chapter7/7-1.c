#include <stdio.h>

int main() {
    int n;

    printf("sizeof(1): %zu\n", sizeof(1)); //イント型は4バイト
    printf("sizeof(+1): %zu\n", sizeof(+1));
    printf("sizeof(-1): %zu\n", sizeof(-1));//singned イント型でも4バイト
    printf("sizeof((unsigned)-1): %zu\n", sizeof((unsigned)-1));//unsigned イント型でも4バイト
    printf("sizeof((double)-1): %zu\n", sizeof((double)-1));//double型は8バイト
    printf("sizeof(((double)-1)): %zu\n", sizeof(((double)-1)));
    printf("sizeof(n+2): %zu\n", sizeof(n+2));
    printf("sizeof((n+2)): %zu\n", sizeof((n-2)));
    printf("sizeof(n+2.0): %zu\n", sizeof(n+2.0));//float型になるので8バイト

    return 0;
}
