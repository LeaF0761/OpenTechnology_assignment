#include <stdio.h>

void inary_rcpy(int v1[], const int v2[], int n) {
    for (int i = 0; i < n; i++) {
        v1[i] = v2[n-i-1];
    }
}

int main() {
    int a[5];
    int b[5] = {1,2,3,4,5};
    
    inary_rcpy(a,b,5);
    
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d \n",i,a[i]);
    }
    
    return 0;
}
