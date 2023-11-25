#include <stdio.h>

#define SIZE 5
int main() {
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE];

    for (int i = 0; i < SIZE; i++) {
        b[i] = a[SIZE - 1 - i];
        printf("a[%d] = %d, b[%d] = %d \n",i,a[i],i,b[i]);
    }
    return 0;
}
