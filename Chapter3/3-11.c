#include <stdio.h>

int main() {
    int A, B;
    
    printf("整数A: ");
    scanf("%d", &A);
    
    printf("整数B: ");
    scanf("%d", &B);

    int diff = A - B;
    
    if( diff > 10 || diff < -10 )   printf("それらの差は11以上です。\n");
    else                            printf("それらの差は10以下です。\n");
    
    return 0;
}
