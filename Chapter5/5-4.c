#include <stdio.h>

#define SIZE 7
int main() {
    int a[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

   
    for (int i = 0; i < SIZE/2; i++) {
        int temp = a[i];
        a[i] = a[SIZE-1-i];
        a[SIZE-1-i] = temp;
    }

    printf("反転した配列\n");
    for (int i = 0; i < SIZE; i++) {
        printf("a[%d] = %d \n",i,a[i]);
    }

    return 0;
}
