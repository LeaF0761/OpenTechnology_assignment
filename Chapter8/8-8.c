#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("2つ整数を入力して: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("最大公約数は %d \n", result);
    return 0;
}
