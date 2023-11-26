#include <stdio.h>

int sumup(int n) {
    int sum = 0;
    
    for (int i = n; i >= 1; i--) {
        sum += i;
    }
    
    return sum;
}

int main() {
    int n;
    printf("n?");
    scanf("%d",&n);
    
    printf("sumup(%d) = %d \n",n,sumup(n));
    
    return 0;
}   
