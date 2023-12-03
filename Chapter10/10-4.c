#include <stdio.h>

void set_idx(int* v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }
}

int main() {
    int arr[5] = {1,11,111,1111,11111};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    set_idx(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

