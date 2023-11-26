#include <stdio.h>
void rev_intary(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[7];
    
    for (int i = 0; i < 7; i++) {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    rev_intary(arr,7);
    
    printf("反転配列\n");
    for (int i = 0; i < 7; i++) {
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    
    return 0;
}