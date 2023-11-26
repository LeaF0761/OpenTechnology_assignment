#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

int main() {
    int n = 5;
    int r = 3; 

    int result = combination(n, r);

    printf("%dC%d = %d\n", n, r, result);

    return 0;
}
