#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int c = 10;

    int result1 = (a == b);  
    int result2 = (a == c); 

    int result3 = (a > c);
    int result4 = (a < c);

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);

    return 0;
}