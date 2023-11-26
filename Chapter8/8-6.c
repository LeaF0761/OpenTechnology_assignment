#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("整数nを入力: ");
    scanf("%d", &n);
    
    int fact = factorial(n);
    printf("%dの階乗は%d\n", n, fact);
    
    return 0;
}
