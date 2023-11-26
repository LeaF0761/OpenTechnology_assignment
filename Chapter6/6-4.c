
#include <stdio.h>

int square(int num) {
    int result = num * num;
    return result;
}
int power4(int num) {
    int result = square(num) * square(num);
    return result;
}


int main() {
    int num = 2;
    int result = power4(num);
    printf("%dの4乗値は%dです。\n", num, result);
    return 0;
}
